# Release
Release folder of all projects.

**Read the [LICENSE](https://github.com/vczh-libraries/Release/blob/master/LICENSE.md) first.**

**Read [GacUI website](http://vczh-libraries.github.io/) or [the mirror website](http://gaclib.net) for more information.**

Download code from [public releases](https://github.com/vczh-libraries/Release/releases) to get the latest stable release. Code from this repo is also usable but I don't make any promise. I will only make a new release when I think the code is ready to update.

## vcpkg

It looks like some people are maintaining a subset of this library in vcpkg, but after I review the configuration, it just doesn't work. I suggest that people still download this library as described above and follow the document. I don't have enough knowledge to fix it right now, people interested in doing that could co-op with me and make a solution.

## Content of This Project

- **Import** Gaclib source code
  - **Skins** Predefined control templates. You will need to call `vl::presentation::theme::RegisterTheme` to set a default skin before creating any controls. Read [WinMain.cpp](https://github.com/vczh-libraries/Release/blob/master/Tutorial/Lib/GacUILite/WinMain.cpp) for details.
- **Tools**
  - **GacGen32.exe** / **GacGen64.exe** GacUI resource compiler and C++ code generator for x86 and x64
  - **CppMerge.exe** Merge GacUI generated code for x86 and x64 to architecture-independent code
  - **ParserGen.exe** General LR parser to C++ code generator
  - **GacBuild.ps1** Do everything for you if you don't want to understand build steps. This one builds multiple resource xml files at the same time. Read the comment for more information.
  - **GacClear.ps1** Force `GacBuild.ps1` rebuilding all resource xml files for the next time.
- **Tutorial** Sample code
  - **Lib** Static library projects for all tutorials
  - **GacUI_HelloWorlds** Different ways to create a GacUI hello world project
  - **GacUI_Layout** Demo how to use GacUI layout
  - **GacUI_Controls** Demo how to use GacUI controls
  - **GacUI_ControlTemplate** Demo how to create control templates (skin) for GacUI controls
  - **GacUI_Xml** Demo how to author GacUI XML resource file
  - **GacUI_Windows** Demo how to interact with native Windows OS features.

Image files are not owned by this repo or organization except for GacUI logos.

## Creating a GacUI app using CMake

Third party project for GacUI 1.0: https://github.com/mangosroom/GacUI-CMake-support

This project is not maintained by members in **vczh-libraries** organization.
In the future there could be some mismatch in the file list,
which could be easily fixed.
