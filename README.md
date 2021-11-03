# Infinity Engine

Welcome to the Infinity Engine source code! From this repository you can build the Infinity Sandbox for Windows, Mac and Linux.

## Getting started

The steps below will take you through the process of building the Infinity Sandbox yourself:

### Windows

1. Clone the repository: `git clone https://github.com/PascalNerger/InfinityEngine.git`
2. Install the latest version of **Visual Studio 2019**. Make sure to that you have the "Game Development with C++" workload installed.
3. Run the *Setup.bat* file.
4. Run *GenerateProjectFiles.bat* to generate the Visual Studio solution and project files.
5. Load the project into Visual Studio by double-clicking on the *InfinityEngine.sln* file.
6. Select *Production* as build configuration and hit F5 to compile and run the project.

### Mac

1. Clone the repository: `git clone https://github.com/PascalNerger/InfinityEngine.git`
2. Install the latest version of **Xcode**.
3. Run the *Setup.command* file.
4. Run *GenerateProjectFiles.command* to generate the project files for Xcode.
5. Load the project into Xcode by double-clicking on the *InfinityEngine.xcworkspace" file.
6. Execute *Product -> Build* (with *Production* as build configuration) and *Product -> Run* to run the project.

### Linux

1. Clone the repository: `git clone https://github.com/PascalNerger/InfinityEngine.git`
2. Make sure **make** is installed.
3. Run the *Setup.sh* file.
4. Run *GenerateProjectFiles.sh* to generate the Makefiles for this project.
5. Run *make config=production* to compile the project.
6. To run the project head over to *Engine/Binaries/Production/* and execute *./InfinityEngine-Sandbox*.
