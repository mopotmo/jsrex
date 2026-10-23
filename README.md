# jsREX

A Java Sound `AudioFileReader` for ReCycle files (`.rex`, `.rx2`, `.rcy`) on Windows. Written in 2004 for the [GrooveManager MC-909 Sample Editor](https://github.com/mopotmo/groovemanager-mc909se).

> **Unofficial.** This project is not affiliated with or endorsed by Reason Studios (formerly Propellerhead Software). REX, ReCycle and Propellerhead are trademarks of Reason Studios AB.

> **Status: archive.** These are the original sources. The native library is 32-bit Windows.

## What it does

`REXFileReader` reads a ReCycle file through the REX SDK and delivers the rendered loop as an `AudioInputStream`. Slice information is available through `REXAudioFileFormat`/`REXSliceInfo`. For the GrooveManager framework the jar also registers `REXFormatProvider`. The audio comes out as float PCM, so the [floatconversion](https://github.com/mopotmo/floatconversion) plugin is needed to convert it.

File properties are exposed as `AudioFileFormat` properties: `duration`, `author`, `copyright`, `comment`, `slice_count`, `bpm`, `time_signature` (`int[2]`) and `slices` (`int[n][2]`: position and length in sample frames).

The REX SDK needs the whole file in memory and can't stream. So the reader only works on `File` arguments, and only for files up to 4 MB. Requests for an `InputStream`, a `URL` or a larger file throw `UnsupportedAudioFileException`.

## Building

The REX SDK is **not** included and must be obtained from Reason Studios under their license terms.

1. Copy `REX.c` and `REX.h` from the SDK into `native/`.
2. Build a 32-bit Windows DLL named `jsrex_1.0.dll` from all `native/*.cpp` files plus `REX.c`, with the JDK's `include` and `include/win32` directories on the include path.
3. At runtime, `jsrex_1.0.dll` and `REX Shared Library.dll` (from the SDK) must be on `java.library.path`, and the jar must be on the classpath.

## License

The code in this repository is MIT licensed, see [LICENSE](LICENSE). The REX SDK it links against is subject to Reason Studios' own license.
