using System;
using System.Collections.Generic;
using System.Text;
using System.IO;

namespace LRC_DTXPack_Unpacker
{
	internal class Program
	{
		static void Main(string[] args)
		{
			// display help message and exit
			if (args.Length < 1)
			{
				Console.WriteLine("Usage: LRC_DTXPack_Unpacker.exe dtx.pack.bin");
				return;
			}

			// check for file existance
			if (!File.Exists(args[0]))
			{
				throw new FileNotFoundException($"File \"{args[0]}\" was not found or access denied.");
			}

			// greetings message
			Console.WriteLine("Lada Racing Club dtx.pack.bin Unpacker");
			Console.WriteLine("(c) 2022 Mike Oxmaul");

			// open the file
			FileStream inFs = new FileStream(args[0], FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
			BinaryReader br = new BinaryReader(inFs);

			// read file header
			uint id = br.ReadUInt32();
			uint unk = br.ReadUInt32();
			uint texCount = br.ReadUInt32();
			uint d1size = br.ReadUInt32();   // size of data1 block

			// read data1 block
			// TODO: Figure out where this data is used
			// Looks like this is a offsets that should be skipped while reading the file
			byte[] data1 = br.ReadBytes((int)d1size);

			// split to separated strings (is this really needed?)
			string[] strings1 = Encoding.Default.GetString(data1).Split(new char[] { '\x00' });

			// create a collection for storing TOC data
			List<TextureEntry> tex2 = new List<TextureEntry>();

			// read data2 block (table of contents)
			for (int i = 0; i < texCount; i++)
			{
				// read TOC data
				TextureEntry tex = new TextureEntry()
				{
					stride  = br.ReadUInt32(), // where this is used?
					offset  = br.ReadUInt32(),
					size    = br.ReadUInt32(),
					padding = br.ReadUInt32()
				};

				// add to collection
				tex2.Add(tex);
			}

			// read the size of data3 block
			uint d3size = br.ReadUInt32();

			// read data3 block (texture names)
			byte[] data3 = br.ReadBytes((int)d3size);

			// split data3 to separated strings
			string[] texNames = Encoding.Default.GetString(data3).Split(new char[] { '\x00' });

			// create a collection for storing data4 values
			StringBuilder data4 = new StringBuilder();

			// read data4 block
			// TODO: Figure out where this data is used
			for (int i = 0; i < (int)texCount * 4; i++)
			{
				data4.Append($"{br.ReadUInt32():X}");
				data4.Append(", ");
			}
			data4.Length -= 2; // remove last ", "

			// create a collection for storing texture data
			List<byte[]> textures = new List<byte[]>();

			// read textures data
			for (int i = 0; i < tex2.Count; i++)
			{
				// jump to texture start offset
				br.BaseStream.Seek(tex2[i].offset, SeekOrigin.Begin);

				// read texture data
				byte[] textureData = br.ReadBytes((int)tex2[i].size);

				// add to collection
				textures.Add(textureData);
			}

			// ---------------------------------------------------------------------------------------

			Console.WriteLine("Extracting...\n");

			// build output path
			string parentDir = Directory.GetParent(args[0]).FullName;
			string outputPath = Path.Combine(parentDir, "unpacked");

			// create output path
			Console.WriteLine($"Output path: {outputPath}\n");
			Directory.CreateDirectory(outputPath);

			// write the files
			for (int i = 0; i < textures.Count; i++)
			{
				Console.WriteLine($"{texNames[i]}.dds");
				File.WriteAllBytes($"{outputPath}\\{texNames[i]}.dds", textures[i]);
			}

			// debug
			File.WriteAllText($"{outputPath}\\data4.txt", data4.ToString());

			// final message
			Console.WriteLine("Finished. Press any key to exit.");
			Console.ReadLine();
		}
	}

	public class TextureEntry
	{
		public uint stride;
		public uint offset;
		public uint size;
		public uint padding;
	}
}
