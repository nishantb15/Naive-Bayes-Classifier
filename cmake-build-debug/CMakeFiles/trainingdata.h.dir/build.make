# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/trainingdata.h.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/trainingdata.h.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/trainingdata.h.dir/flags.make

CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o: CMakeFiles/trainingdata.h.dir/flags.make
CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o: ../trainingdata.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o -c /mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15/trainingdata.cpp

CMakeFiles/trainingdata.h.dir/trainingdata.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trainingdata.h.dir/trainingdata.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15/trainingdata.cpp > CMakeFiles/trainingdata.h.dir/trainingdata.cpp.i

CMakeFiles/trainingdata.h.dir/trainingdata.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trainingdata.h.dir/trainingdata.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15/trainingdata.cpp -o CMakeFiles/trainingdata.h.dir/trainingdata.cpp.s

CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o.requires:

.PHONY : CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o.requires

CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o.provides: CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o.requires
	$(MAKE) -f CMakeFiles/trainingdata.h.dir/build.make CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o.provides.build
.PHONY : CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o.provides

CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o.provides.build: CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o


# Object files for target trainingdata.h
trainingdata_h_OBJECTS = \
"CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o"

# External object files for target trainingdata.h
trainingdata_h_EXTERNAL_OBJECTS =

trainingdata.h: CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o
trainingdata.h: CMakeFiles/trainingdata.h.dir/build.make
trainingdata.h: CMakeFiles/trainingdata.h.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable trainingdata.h"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/trainingdata.h.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/trainingdata.h.dir/build: trainingdata.h

.PHONY : CMakeFiles/trainingdata.h.dir/build

CMakeFiles/trainingdata.h.dir/requires: CMakeFiles/trainingdata.h.dir/trainingdata.cpp.o.requires

.PHONY : CMakeFiles/trainingdata.h.dir/requires

CMakeFiles/trainingdata.h.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/trainingdata.h.dir/cmake_clean.cmake
.PHONY : CMakeFiles/trainingdata.h.dir/clean

CMakeFiles/trainingdata.h.dir/depend:
	cd /mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15 /mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15 /mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15/cmake-build-debug /mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15/cmake-build-debug /mnt/c/Users/nisha/CLionProjects/naivebayes-nishantb15/cmake-build-debug/CMakeFiles/trainingdata.h.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/trainingdata.h.dir/depend
