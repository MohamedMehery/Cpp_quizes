# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\build

# Include any dependencies generated for this target.
include lib/CMakeFiles/example_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/example_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/example_lib.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/example_lib.dir/flags.make

lib/CMakeFiles/example_lib.dir/example.cpp.obj: lib/CMakeFiles/example_lib.dir/flags.make
lib/CMakeFiles/example_lib.dir/example.cpp.obj: C:/Users/Mohamed_Mehery/Documents/GitHub/Cpp_quizes/lib/example.cpp
lib/CMakeFiles/example_lib.dir/example.cpp.obj: lib/CMakeFiles/example_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/example_lib.dir/example.cpp.obj"
	cd /d C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\build\lib && C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/CMakeFiles/example_lib.dir/example.cpp.obj -MF CMakeFiles\example_lib.dir\example.cpp.obj.d -o CMakeFiles\example_lib.dir\example.cpp.obj -c C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\lib\example.cpp

lib/CMakeFiles/example_lib.dir/example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_lib.dir/example.cpp.i"
	cd /d C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\build\lib && C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\lib\example.cpp > CMakeFiles\example_lib.dir\example.cpp.i

lib/CMakeFiles/example_lib.dir/example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_lib.dir/example.cpp.s"
	cd /d C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\build\lib && C:\msys64\ucrt64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\lib\example.cpp -o CMakeFiles\example_lib.dir\example.cpp.s

# Object files for target example_lib
example_lib_OBJECTS = \
"CMakeFiles/example_lib.dir/example.cpp.obj"

# External object files for target example_lib
example_lib_EXTERNAL_OBJECTS =

lib/libexample_lib.a: lib/CMakeFiles/example_lib.dir/example.cpp.obj
lib/libexample_lib.a: lib/CMakeFiles/example_lib.dir/build.make
lib/libexample_lib.a: lib/CMakeFiles/example_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libexample_lib.a"
	cd /d C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\build\lib && $(CMAKE_COMMAND) -P CMakeFiles\example_lib.dir\cmake_clean_target.cmake
	cd /d C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\build\lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\example_lib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/example_lib.dir/build: lib/libexample_lib.a
.PHONY : lib/CMakeFiles/example_lib.dir/build

lib/CMakeFiles/example_lib.dir/clean:
	cd /d C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\build\lib && $(CMAKE_COMMAND) -P CMakeFiles\example_lib.dir\cmake_clean.cmake
.PHONY : lib/CMakeFiles/example_lib.dir/clean

lib/CMakeFiles/example_lib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\lib C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\build C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\build\lib C:\Users\Mohamed_Mehery\Documents\GitHub\Cpp_quizes\build\lib\CMakeFiles\example_lib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/example_lib.dir/depend

