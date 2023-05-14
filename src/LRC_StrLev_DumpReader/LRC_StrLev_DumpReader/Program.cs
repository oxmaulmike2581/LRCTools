using System;
using System.Collections.Generic;
using System.IO;

namespace LRC_StrLev_DumpReader
{
	internal class Program
	{
		static void Main(string[] args)
		{
			if (args.Length < 1)
			{
				Console.WriteLine("Usage: LRC_StrLev_DumpReader.exe file.dat <num_blocks>");
				Console.WriteLine("Hint: num_blocks value can be found before first zlib block in strlev.bin file.");
				return;
			}

			if (args.Length < 2)
			{
				Console.WriteLine("Error: you must provide num_blocks value to read the file");
				return;
			}

			if (!File.Exists(args[0]))
			{
				throw new FileNotFoundException("Input file was not found or access denied");
			}

			byte[] inFile = File.ReadAllBytes(args[0]);
			int num_blocks = Convert.ToInt32(args[1]);
			List<Block> blocks = new List<Block>();

			// read the file
			using (BinaryReader br = new BinaryReader(new MemoryStream(inFile)))
			{
				for (int i = 0; i < num_blocks; i++)
				{
					Block b = new Block();

					// read the data
					b.v1 = br.ReadUInt32();                // the size of data1
					b.data1 = br.ReadBytes((int)b.v1);
					b.v2 = br.ReadUInt32();                // val*2 is the size of data2
					b.data2 = br.ReadBytes((int)b.v2 * 2);
					b.v3 = br.ReadUInt32();                // unknown

					// read a... header?
					b.u1 = br.ReadUInt32();
					b.u2 = br.ReadUInt32();
					b.u3 = br.ReadUInt32();
					b.u4 = br.ReadUInt32();                // count of sub-blocks
					b.subBlocks = new List<SubBlock>();

					// next we have a cycled data, the count is u4
					for (int j = 0; j < b.u4; j++)
					{
						SubBlock sub = new SubBlock
						{
							u1 = br.ReadUInt32(),
							u2 = br.ReadUInt32(),
							u3 = br.ReadUInt32()
						};
						b.subBlocks.Add(sub);
					}

					blocks.Add(b);
				}
			}

			// print summary
			Console.WriteLine($"Summary:");

			for (int i = 0; i < blocks.Count; i++)
			{
				Console.WriteLine("==================================================");
				Console.WriteLine($"Block #{i + 1}/{num_blocks}:");
				Console.WriteLine($"    v1 = 0x{blocks[i].v1:X}");
				Console.WriteLine($"    data1 size is 0x{blocks[i].data1.Length:X}");
				Console.WriteLine($"    v2 = 0x{blocks[i].v2:X} (v2*2 = 0x{(blocks[i].v2*2):X})");
				Console.WriteLine($"    data2 size is 0x{blocks[i].data2.Length:X}");
				Console.WriteLine($"    v3 = {blocks[i].v3}\n");

				Console.WriteLine($"    u1 = {blocks[i].u1}");
				Console.WriteLine($"    u2 = {blocks[i].u2}");
				Console.WriteLine($"    u3 = {blocks[i].u3}");
				Console.WriteLine($"    u4 = {blocks[i].u4}");

				int c = 5;
				for (int j = 0; j < blocks[i].u4; j++)
				{
					Console.WriteLine($"    u{c} = {blocks[i].subBlocks[j].u1}"); c++;
					Console.WriteLine($"    u{c} = {blocks[i].subBlocks[j].u2}"); c++;
					Console.WriteLine($"    u{c} = {blocks[i].subBlocks[j].u3}"); c++;
				}

				Console.WriteLine("==================================================");
			}

			Console.WriteLine("\nFinished. Press any key to exit.");
			Console.ReadLine();
		}
	}

	public class Block
	{
		// main data
		public uint v1;
		public byte[] data1;
		public uint v2;
		public byte[] data2;
		public uint v3;

		// header?
		public uint u1;
		public uint u2;
		public uint u3;
		public uint u4;
		public List<SubBlock> subBlocks = new List<SubBlock>();
	}

	public class SubBlock
	{
		public uint u1;
		public uint u2;
		public uint u3;
	}
}
