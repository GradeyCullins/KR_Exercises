# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/greybonez/Repositories/KR_Exercises

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/greybonez/Repositories/KR_Exercises/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/KR_Exercises.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/KR_Exercises.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/KR_Exercises.dir/flags.make

CMakeFiles/KR_Exercises.dir/main.c.o: CMakeFiles/KR_Exercises.dir/flags.make
CMakeFiles/KR_Exercises.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/greybonez/Repositories/KR_Exercises/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/KR_Exercises.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/KR_Exercises.dir/main.c.o   -c /Users/greybonez/Repositories/KR_Exercises/main.c

CMakeFiles/KR_Exercises.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/KR_Exercises.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/greybonez/Repositories/KR_Exercises/main.c > CMakeFiles/KR_Exercises.dir/main.c.i

CMakeFiles/KR_Exercises.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/KR_Exercises.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/greybonez/Repositories/KR_Exercises/main.c -o CMakeFiles/KR_Exercises.dir/main.c.s

CMakeFiles/KR_Exercises.dir/main.c.o.requires:

.PHONY : CMakeFiles/KR_Exercises.dir/main.c.o.requires

CMakeFiles/KR_Exercises.dir/main.c.o.provides: CMakeFiles/KR_Exercises.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/KR_Exercises.dir/build.make CMakeFiles/KR_Exercises.dir/main.c.o.provides.build
.PHONY : CMakeFiles/KR_Exercises.dir/main.c.o.provides

CMakeFiles/KR_Exercises.dir/main.c.o.provides.build: CMakeFiles/KR_Exercises.dir/main.c.o


# Object files for target KR_Exercises
KR_Exercises_OBJECTS = \
"CMakeFiles/KR_Exercises.dir/main.c.o"

# External object files for target KR_Exercises
KR_Exercises_EXTERNAL_OBJECTS =

KR_Exercises: CMakeFiles/KR_Exercises.dir/main.c.o
KR_Exercises: CMakeFiles/KR_Exercises.dir/build.make
KR_Exercises: CMakeFiles/KR_Exercises.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/greybonez/Repositories/KR_Exercises/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable KR_Exercises"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/KR_Exercises.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/KR_Exercises.dir/build: KR_Exercises

.PHONY : CMakeFiles/KR_Exercises.dir/build

CMakeFiles/KR_Exercises.dir/requires: CMakeFiles/KR_Exercises.dir/main.c.o.requires

.PHONY : CMakeFiles/KR_Exercises.dir/requires

CMakeFiles/KR_Exercises.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/KR_Exercises.dir/cmake_clean.cmake
.PHONY : CMakeFiles/KR_Exercises.dir/clean

CMakeFiles/KR_Exercises.dir/depend:
	cd /Users/greybonez/Repositories/KR_Exercises/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/greybonez/Repositories/KR_Exercises /Users/greybonez/Repositories/KR_Exercises /Users/greybonez/Repositories/KR_Exercises/cmake-build-debug /Users/greybonez/Repositories/KR_Exercises/cmake-build-debug /Users/greybonez/Repositories/KR_Exercises/cmake-build-debug/CMakeFiles/KR_Exercises.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/KR_Exercises.dir/depend

