using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace LRC_MoscowPakBin_Unpacker
{
	internal class Program
	{
		static void Main(string[] args)
		{
			string fileName;

			// display help message and exit
			if (args.Length < 1)
			{
				if (File.Exists(Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "moscow.pak.bin")))
				{
					fileName = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "moscow.pak.bin");
				}
				else
				{
					Console.WriteLine("Usage: LRC_MoscowPakBin_Unpacker.exe moscow.pak.bin");
					return;
				}
			}
			else
			{
				fileName = args[0];
			}

			// check for file existance
			if (!File.Exists(fileName))
			{
				throw new FileNotFoundException($"File \"{fileName}\" was not found or access denied.");
			}

			// greetings message
			Console.WriteLine("Lada Racing Club moscow.pak.bin Unpacker");
			Console.WriteLine("(c) 2022 Mike Oxmaul");

			// open the file
			FileStream inFs = new FileStream(fileName, FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
			BinaryReader br = new BinaryReader(inFs);

			// read file header
			uint magic = br.ReadUInt32();      // an identifier
			uint strLevSize = br.ReadUInt32(); // the size of the StrLevEntries + file names block
			uint filesCount = br.ReadUInt32(); // total files in the archive
			uint blockSize = br.ReadUInt32();  // the size only of the StrLevEntries block
			
			// read StrLevEntry data
			// because of stupid writing scheme we need to read first X-1 entries recursively,
			// and then read the last one manually
			// if we ignore that and read all entries recursively,
			// then we have a wrong position (required+4)
			List<StrLevEntry> strLevEntries = new List<StrLevEntry>();
			for (int i = 0; i < filesCount-1; i++)
			{
				StrLevEntry entry = new StrLevEntry()
				{
					offset = br.ReadUInt32(),
					size = br.ReadUInt32(),
					nameEndOffset = br.ReadUInt32()
				};
				strLevEntries.Add(entry);
			}
			StrLevEntry lastEntry = new StrLevEntry()
			{
				offset = br.ReadUInt32(),
				size = br.ReadUInt32(),
				nameEndOffset = 0
			};
			strLevEntries.Add(lastEntry);

			// calculate names block size
			uint size = strLevSize - (12 * filesCount);

			// read names block and split it up to strings
			byte[] namesb = br.ReadBytes((int)size);
			string[] names = Encoding.Default.GetString(namesb).Split(new char[] { '\x00' });
			
			// read strlev blocks
			List<byte[]> strLevBlocks = new List<byte[]>();
			for (int i = 0; i < filesCount; i++)
			{
				br.BaseStream.Seek(strLevEntries[i].offset, SeekOrigin.Begin);
				byte[] data = br.ReadBytes((int)strLevEntries[i].size);
				strLevBlocks.Add(data);
			}

			// ---------------------------------------------------------------------------------------

			Console.WriteLine("Extracting...\n");

			// build output path
			string parentDir = Directory.GetParent(fileName).FullName;
			string outputPath = Path.Combine(parentDir, "unpacked");
			if (!Directory.Exists(outputPath))
			{

				Directory.CreateDirectory(outputPath);
			}

			// create output path
			Console.WriteLine($"Output path: {outputPath}\n");

			// write the files
			for (int i = 0; i < strLevBlocks.Count; i++)
			{
				Console.WriteLine($"{names[i]}");
				string finalPath = Path.Combine(outputPath, names[i]).EvaluatePath();
				File.WriteAllBytes(finalPath, strLevBlocks[i]);
			}

			// final message
			Console.WriteLine("Finished. Press any key to exit.");
			Console.ReadLine();
		}
	}

	public class StrLevEntry
	{
		public uint offset;
		public uint size;
		public uint nameEndOffset;
	}

	public static class Utils
	{
		public static string ReadNullTerminatedString(this BinaryReader stream)
		{
			StringBuilder str = new StringBuilder();
			char ch;

			while ((ch = stream.ReadChar()) != 0)
			{
				str.Append(ch);
			}

			return str.ToString();
		}

		public static string EvaluatePath(this string path)
		{
			string folder = Path.GetDirectoryName(path);

			if (!Directory.Exists(folder))
			{
				Directory.CreateDirectory(folder);
			}

			return path;
		}
	}
}
