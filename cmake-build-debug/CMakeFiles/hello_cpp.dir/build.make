# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /usr/local/clion-2019.3.6/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /usr/local/clion-2019.3.6/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lzy/cpp/hello_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lzy/cpp/hello_cpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hello_cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hello_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello_cpp.dir/flags.make

CMakeFiles/hello_cpp.dir/main.cpp.o: CMakeFiles/hello_cpp.dir/flags.make
CMakeFiles/hello_cpp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lzy/cpp/hello_cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello_cpp.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello_cpp.dir/main.cpp.o -c /home/lzy/cpp/hello_cpp/main.cpp

CMakeFiles/hello_cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello_cpp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lzy/cpp/hello_cpp/main.cpp > CMakeFiles/hello_cpp.dir/main.cpp.i

CMakeFiles/hello_cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello_cpp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lzy/cpp/hello_cpp/main.cpp -o CMakeFiles/hello_cpp.dir/main.cpp.s

# Object files for target hello_cpp
hello_cpp_OBJECTS = \
"CMakeFiles/hello_cpp.dir/main.cpp.o"

# External object files for target hello_cpp
hello_cpp_EXTERNAL_OBJECTS =

hello_cpp: CMakeFiles/hello_cpp.dir/main.cpp.o
hello_cpp: CMakeFiles/hello_cpp.dir/build.make
hello_cpp: CMakeFiles/hello_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lzy/cpp/hello_cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hello_cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello_cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello_cpp.dir/build: hello_cpp

.PHONY : CMakeFiles/hello_cpp.dir/build

CMakeFiles/hello_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello_cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello_cpp.dir/clean

CMakeFiles/hello_cpp.dir/depend:
	cd /home/lzy/cpp/hello_cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lzy/cpp/hello_cpp /home/lzy/cpp/hello_cpp /home/lzy/cpp/hello_cpp/cmake-build-debug /home/lzy/cpp/hello_cpp/cmake-build-debug /home/lzy/cpp/hello_cpp/cmake-build-debug/CMakeFiles/hello_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello_cpp.dir/depend

