# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/projects/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/projects/test/build

# Include any dependencies generated for this target.
include Exception/CMakeFiles/ExceptionLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Exception/CMakeFiles/ExceptionLib.dir/compiler_depend.make

# Include the progress variables for this target.
include Exception/CMakeFiles/ExceptionLib.dir/progress.make

# Include the compile flags for this target's objects.
include Exception/CMakeFiles/ExceptionLib.dir/flags.make

Exception/CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.o: Exception/CMakeFiles/ExceptionLib.dir/flags.make
Exception/CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.o: ../Exception/DivideByZero.cpp
Exception/CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.o: Exception/CMakeFiles/ExceptionLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/projects/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Exception/CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.o"
	cd /root/projects/test/build/Exception && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Exception/CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.o -MF CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.o.d -o CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.o -c /root/projects/test/Exception/DivideByZero.cpp

Exception/CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.i"
	cd /root/projects/test/build/Exception && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/projects/test/Exception/DivideByZero.cpp > CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.i

Exception/CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.s"
	cd /root/projects/test/build/Exception && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/projects/test/Exception/DivideByZero.cpp -o CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.s

# Object files for target ExceptionLib
ExceptionLib_OBJECTS = \
"CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.o"

# External object files for target ExceptionLib
ExceptionLib_EXTERNAL_OBJECTS =

Exception/libExceptionLib.a: Exception/CMakeFiles/ExceptionLib.dir/DivideByZero.cpp.o
Exception/libExceptionLib.a: Exception/CMakeFiles/ExceptionLib.dir/build.make
Exception/libExceptionLib.a: Exception/CMakeFiles/ExceptionLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/projects/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libExceptionLib.a"
	cd /root/projects/test/build/Exception && $(CMAKE_COMMAND) -P CMakeFiles/ExceptionLib.dir/cmake_clean_target.cmake
	cd /root/projects/test/build/Exception && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ExceptionLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Exception/CMakeFiles/ExceptionLib.dir/build: Exception/libExceptionLib.a
.PHONY : Exception/CMakeFiles/ExceptionLib.dir/build

Exception/CMakeFiles/ExceptionLib.dir/clean:
	cd /root/projects/test/build/Exception && $(CMAKE_COMMAND) -P CMakeFiles/ExceptionLib.dir/cmake_clean.cmake
.PHONY : Exception/CMakeFiles/ExceptionLib.dir/clean

Exception/CMakeFiles/ExceptionLib.dir/depend:
	cd /root/projects/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/projects/test /root/projects/test/Exception /root/projects/test/build /root/projects/test/build/Exception /root/projects/test/build/Exception/CMakeFiles/ExceptionLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Exception/CMakeFiles/ExceptionLib.dir/depend

