# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/alfredo/Documentos/GitHub/TO/PilaArray

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alfredo/Documentos/GitHub/TO/PilaArray/build

# Include any dependencies generated for this target.
include CMakeFiles/StackTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StackTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StackTest.dir/flags.make

CMakeFiles/StackTest.dir/StackTest.cc.o: CMakeFiles/StackTest.dir/flags.make
CMakeFiles/StackTest.dir/StackTest.cc.o: ../StackTest.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alfredo/Documentos/GitHub/TO/PilaArray/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StackTest.dir/StackTest.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/StackTest.dir/StackTest.cc.o -c /home/alfredo/Documentos/GitHub/TO/PilaArray/StackTest.cc

CMakeFiles/StackTest.dir/StackTest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StackTest.dir/StackTest.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alfredo/Documentos/GitHub/TO/PilaArray/StackTest.cc > CMakeFiles/StackTest.dir/StackTest.cc.i

CMakeFiles/StackTest.dir/StackTest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StackTest.dir/StackTest.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alfredo/Documentos/GitHub/TO/PilaArray/StackTest.cc -o CMakeFiles/StackTest.dir/StackTest.cc.s

# Object files for target StackTest
StackTest_OBJECTS = \
"CMakeFiles/StackTest.dir/StackTest.cc.o"

# External object files for target StackTest
StackTest_EXTERNAL_OBJECTS =

StackTest: CMakeFiles/StackTest.dir/StackTest.cc.o
StackTest: CMakeFiles/StackTest.dir/build.make
StackTest: lib/libgtest_main.a
StackTest: lib/libgtest.a
StackTest: CMakeFiles/StackTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alfredo/Documentos/GitHub/TO/PilaArray/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StackTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StackTest.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=StackTest -D TEST_EXECUTABLE=/home/alfredo/Documentos/GitHub/TO/PilaArray/build/StackTest -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/alfredo/Documentos/GitHub/TO/PilaArray/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=StackTest_TESTS -D CTEST_FILE=/home/alfredo/Documentos/GitHub/TO/PilaArray/build/StackTest[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -P /usr/share/cmake-3.16/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/StackTest.dir/build: StackTest

.PHONY : CMakeFiles/StackTest.dir/build

CMakeFiles/StackTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StackTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StackTest.dir/clean

CMakeFiles/StackTest.dir/depend:
	cd /home/alfredo/Documentos/GitHub/TO/PilaArray/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alfredo/Documentos/GitHub/TO/PilaArray /home/alfredo/Documentos/GitHub/TO/PilaArray /home/alfredo/Documentos/GitHub/TO/PilaArray/build /home/alfredo/Documentos/GitHub/TO/PilaArray/build /home/alfredo/Documentos/GitHub/TO/PilaArray/build/CMakeFiles/StackTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StackTest.dir/depend

