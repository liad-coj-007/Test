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
include Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/compiler_depend.make

# Include the progress variables for this target.
include Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/progress.make

# Include the compile flags for this target's objects.
include Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/flags.make

Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/FileError.cpp.o: Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/flags.make
Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/FileError.cpp.o: ../Exception/TestExcpetion/FileError.cpp
Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/FileError.cpp.o: Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/projects/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/FileError.cpp.o"
	cd /root/projects/test/build/Exception/TestExcpetion && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/FileError.cpp.o -MF CMakeFiles/ExceptionTestLib.dir/FileError.cpp.o.d -o CMakeFiles/ExceptionTestLib.dir/FileError.cpp.o -c /root/projects/test/Exception/TestExcpetion/FileError.cpp

Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/FileError.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExceptionTestLib.dir/FileError.cpp.i"
	cd /root/projects/test/build/Exception/TestExcpetion && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/projects/test/Exception/TestExcpetion/FileError.cpp > CMakeFiles/ExceptionTestLib.dir/FileError.cpp.i

Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/FileError.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExceptionTestLib.dir/FileError.cpp.s"
	cd /root/projects/test/build/Exception/TestExcpetion && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/projects/test/Exception/TestExcpetion/FileError.cpp -o CMakeFiles/ExceptionTestLib.dir/FileError.cpp.s

Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.o: Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/flags.make
Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.o: ../Exception/TestExcpetion/TestNotExsit.cpp
Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.o: Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/projects/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.o"
	cd /root/projects/test/build/Exception/TestExcpetion && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.o -MF CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.o.d -o CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.o -c /root/projects/test/Exception/TestExcpetion/TestNotExsit.cpp

Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.i"
	cd /root/projects/test/build/Exception/TestExcpetion && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/projects/test/Exception/TestExcpetion/TestNotExsit.cpp > CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.i

Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.s"
	cd /root/projects/test/build/Exception/TestExcpetion && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/projects/test/Exception/TestExcpetion/TestNotExsit.cpp -o CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.s

Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.o: Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/flags.make
Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.o: ../Exception/TestExcpetion/InvaildName.cpp
Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.o: Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/projects/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.o"
	cd /root/projects/test/build/Exception/TestExcpetion && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.o -MF CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.o.d -o CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.o -c /root/projects/test/Exception/TestExcpetion/InvaildName.cpp

Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.i"
	cd /root/projects/test/build/Exception/TestExcpetion && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/projects/test/Exception/TestExcpetion/InvaildName.cpp > CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.i

Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.s"
	cd /root/projects/test/build/Exception/TestExcpetion && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/projects/test/Exception/TestExcpetion/InvaildName.cpp -o CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.s

# Object files for target ExceptionTestLib
ExceptionTestLib_OBJECTS = \
"CMakeFiles/ExceptionTestLib.dir/FileError.cpp.o" \
"CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.o" \
"CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.o"

# External object files for target ExceptionTestLib
ExceptionTestLib_EXTERNAL_OBJECTS =

Exception/TestExcpetion/libExceptionTestLib.a: Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/FileError.cpp.o
Exception/TestExcpetion/libExceptionTestLib.a: Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/TestNotExsit.cpp.o
Exception/TestExcpetion/libExceptionTestLib.a: Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/InvaildName.cpp.o
Exception/TestExcpetion/libExceptionTestLib.a: Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/build.make
Exception/TestExcpetion/libExceptionTestLib.a: Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/projects/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libExceptionTestLib.a"
	cd /root/projects/test/build/Exception/TestExcpetion && $(CMAKE_COMMAND) -P CMakeFiles/ExceptionTestLib.dir/cmake_clean_target.cmake
	cd /root/projects/test/build/Exception/TestExcpetion && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ExceptionTestLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/build: Exception/TestExcpetion/libExceptionTestLib.a
.PHONY : Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/build

Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/clean:
	cd /root/projects/test/build/Exception/TestExcpetion && $(CMAKE_COMMAND) -P CMakeFiles/ExceptionTestLib.dir/cmake_clean.cmake
.PHONY : Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/clean

Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/depend:
	cd /root/projects/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/projects/test /root/projects/test/Exception/TestExcpetion /root/projects/test/build /root/projects/test/build/Exception/TestExcpetion /root/projects/test/build/Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Exception/TestExcpetion/CMakeFiles/ExceptionTestLib.dir/depend
