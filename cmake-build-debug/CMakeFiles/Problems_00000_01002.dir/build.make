# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\pc\CLionProjects\BOJ

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\pc\CLionProjects\BOJ\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Problems_00000_01002.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Problems_00000_01002.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Problems_00000_01002.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Problems_00000_01002.dir/flags.make

CMakeFiles/Problems_00000_01002.dir/Problems/00000/01002.cpp.obj: CMakeFiles/Problems_00000_01002.dir/flags.make
CMakeFiles/Problems_00000_01002.dir/Problems/00000/01002.cpp.obj: CMakeFiles/Problems_00000_01002.dir/includes_CXX.rsp
CMakeFiles/Problems_00000_01002.dir/Problems/00000/01002.cpp.obj: ../Problems/00000/01002.cpp
CMakeFiles/Problems_00000_01002.dir/Problems/00000/01002.cpp.obj: CMakeFiles/Problems_00000_01002.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\pc\CLionProjects\BOJ\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Problems_00000_01002.dir/Problems/00000/01002.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Problems_00000_01002.dir/Problems/00000/01002.cpp.obj -MF CMakeFiles\Problems_00000_01002.dir\Problems\00000\01002.cpp.obj.d -o CMakeFiles\Problems_00000_01002.dir\Problems\00000\01002.cpp.obj -c C:\Users\pc\CLionProjects\BOJ\Problems\00000\01002.cpp

CMakeFiles/Problems_00000_01002.dir/Problems/00000/01002.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Problems_00000_01002.dir/Problems/00000/01002.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\pc\CLionProjects\BOJ\Problems\00000\01002.cpp > CMakeFiles\Problems_00000_01002.dir\Problems\00000\01002.cpp.i

CMakeFiles/Problems_00000_01002.dir/Problems/00000/01002.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Problems_00000_01002.dir/Problems/00000/01002.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.4\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\pc\CLionProjects\BOJ\Problems\00000\01002.cpp -o CMakeFiles\Problems_00000_01002.dir\Problems\00000\01002.cpp.s

# Object files for target Problems_00000_01002
Problems_00000_01002_OBJECTS = \
"CMakeFiles/Problems_00000_01002.dir/Problems/00000/01002.cpp.obj"

# External object files for target Problems_00000_01002
Problems_00000_01002_EXTERNAL_OBJECTS =

Problems_00000_01002.exe: CMakeFiles/Problems_00000_01002.dir/Problems/00000/01002.cpp.obj
Problems_00000_01002.exe: CMakeFiles/Problems_00000_01002.dir/build.make
Problems_00000_01002.exe: CMakeFiles/Problems_00000_01002.dir/linklibs.rsp
Problems_00000_01002.exe: CMakeFiles/Problems_00000_01002.dir/objects1.rsp
Problems_00000_01002.exe: CMakeFiles/Problems_00000_01002.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\pc\CLionProjects\BOJ\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Problems_00000_01002.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Problems_00000_01002.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Problems_00000_01002.dir/build: Problems_00000_01002.exe
.PHONY : CMakeFiles/Problems_00000_01002.dir/build

CMakeFiles/Problems_00000_01002.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Problems_00000_01002.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Problems_00000_01002.dir/clean

CMakeFiles/Problems_00000_01002.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\pc\CLionProjects\BOJ C:\Users\pc\CLionProjects\BOJ C:\Users\pc\CLionProjects\BOJ\cmake-build-debug C:\Users\pc\CLionProjects\BOJ\cmake-build-debug C:\Users\pc\CLionProjects\BOJ\cmake-build-debug\CMakeFiles\Problems_00000_01002.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Problems_00000_01002.dir/depend

