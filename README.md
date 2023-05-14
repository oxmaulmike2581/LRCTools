# LRCTools

### Description
<ul>
  <li>
    Set of tools to work with some files from old Russian game <a href="https://ru.wikipedia.org/wiki/LADA_Racing_Club" target="_blank">Lada Racing Club</a> created on <a href="https://ru.wikipedia.org/wiki/Dagor_Engine" target="_blank">Dagor Engine</a>.<br /><br />
    Created when I tried to research the formats used in world map assets to read and convert them.<br />
    This project has many limitations due to my source plans, please read "Limitations" section.<br />
    I will not continue the development, that's why I'm publishing what I have, but if you want to complete my work - feel free to do it.
    <br />
    You can find more information about file structure I've researched, and some chunks of decompiled code from main executable <i>(now I don't remember what that code do)</i> in "<a href="https://github.com/oxmaulmike2581/LRCTools/tree/master/docs" target="_blank">docs</a>" folder inside that repository.<br />
    Some data may be wrong or incorrect, or be written as a guess, so it needs to be re-checked again manually.<br />
    I will not publish the links to the game for legal/copyright reasons, but who really needs it, that knows where to find it.
  </li>
</ul>

### Features
<ul>
  <li>Unpack <code>levels\moscow\dtx.pack.bin</code> <i>(which contains textures used in world map)</i></li>
  <li>Unpack <code>levels\moscow.pak.bin</code> <i>(which contain *.strlev.bin files)</i></li>
  <li>Read chunks in <code>levels\moscow\*.strlev.bin</code> files <i>(which should be unpacked first from moscow.pak.bin)</i> and print information about each of them.</li>
</ul>

### Download
<ul>
  <li>All builds are available in <a href="https://github.com/oxmaulmike2581/LRCTools/releases">Releases</a> page.
</ul>

### Usage
<ul>
  <li>Unpack <strong>levels\moscow\dtx.pack.bin</strong>:<br />
    <code>LRC_DTXPack_Unpacker.exe dtx.pack.bin</code>
  </li>
  <li>&nbsp;</li>
  <li>Unpack <strong>levels\moscow.pak.bin</strong>:<br />
    <code>LRC_MoscowPakBin_Unpacker.exe moscow.pak.bin</code>
  </li>
  <li>&nbsp;</li>
  <li>Dump information about sub-chunks inside <strong>*.strlev.bin</strong> files:<br />
    <code>LRC_StrLev_DumpReader.exe file.dat &lt;num_blocks&gt;</code><br />
    <i>Hint: num_blocks value can be found before first zlib block in strlev.bin file.</i>
  </li>
</ul>

### Limitations
<ul>
  <li>You can <strong>NOT</strong> create modifications for this game using these tools</li>
  <li>You can extract only textures of the world map and some chunks from *.strlev.bin files <i>(which probably has model data or something else)</i></li>
  <li>You can <strong>NOT</strong> extract 3D model of the map.</li>
  <li>You can <strong>NOT</strong> extract vehicle models.</li>
</ul>

### Dependencies
<ul>
  <li><a href="https://dotnet.microsoft.com/en-us/download/dotnet-framework/net472" target="_blank">.NET Framework 4.7.2</a> or newer.</li>
</ul>

### FAQ
<ul>
  <li>
    <strong>Q:</strong> How can I run your tool? When I double-clicking on EXE, it just displays me a help text.<br />
    <strong>A:</strong> Right-mouse-click on a empty space of Explorer window with folder where .exe is located and choose "Open in Terminal", or, if you're on Windows 10, press Shift and then Right-mouse-click and choose "Open command prompt here", or simply click on address bar at the top of the Explorer window and type "cmd", then press Enter.<br />
    <strong><em>Sadly, many people still don't know this.</em></strong>
  </li>
  <li>&nbsp;</li>
  <li>
    <strong>Q:</strong> Can I use your tools to unpack/convert/open &lt;my-file&gt;?<br />
    <strong>A:</strong> Read <a href="#features">Features</a> section, it has a list of what these tools can do.
  </li>
  <li>&nbsp;</li>
  <li>
    <strong>Q:</strong> Can you add a &lt;feature-name&gt;?<br />
    <strong>A:</strong> No, this project is discontinued and published "as is".
  </li>
</ul>

### Licensing
<ul>
  <li>This project is licensed under <a href="https://opensource.org/license/mit/" target="_blank">MIT License</a>.</li>
</ul>
