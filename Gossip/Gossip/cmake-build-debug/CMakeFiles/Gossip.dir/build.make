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
CMAKE_COMMAND = /home/duncan/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/192.7142.39/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/duncan/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/192.7142.39/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Gossip.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Gossip.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Gossip.dir/flags.make

CMakeFiles/Gossip.dir/Gossip.cpp.o: CMakeFiles/Gossip.dir/flags.make
CMakeFiles/Gossip.dir/Gossip.cpp.o: ../Gossip.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Gossip.dir/Gossip.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Gossip.dir/Gossip.cpp.o -c /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/Gossip.cpp

CMakeFiles/Gossip.dir/Gossip.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Gossip.dir/Gossip.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/Gossip.cpp > CMakeFiles/Gossip.dir/Gossip.cpp.i

CMakeFiles/Gossip.dir/Gossip.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Gossip.dir/Gossip.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/Gossip.cpp -o CMakeFiles/Gossip.dir/Gossip.cpp.s

CMakeFiles/Gossip.dir/main.cpp.o: CMakeFiles/Gossip.dir/flags.make
CMakeFiles/Gossip.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Gossip.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Gossip.dir/main.cpp.o -c /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/main.cpp

CMakeFiles/Gossip.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Gossip.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/main.cpp > CMakeFiles/Gossip.dir/main.cpp.i

CMakeFiles/Gossip.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Gossip.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/main.cpp -o CMakeFiles/Gossip.dir/main.cpp.s

CMakeFiles/Gossip.dir/Source.cpp.o: CMakeFiles/Gossip.dir/flags.make
CMakeFiles/Gossip.dir/Source.cpp.o: ../Source.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Gossip.dir/Source.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Gossip.dir/Source.cpp.o -c /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/Source.cpp

CMakeFiles/Gossip.dir/Source.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Gossip.dir/Source.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/Source.cpp > CMakeFiles/Gossip.dir/Source.cpp.i

CMakeFiles/Gossip.dir/Source.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Gossip.dir/Source.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/Source.cpp -o CMakeFiles/Gossip.dir/Source.cpp.s

# Object files for target Gossip
Gossip_OBJECTS = \
"CMakeFiles/Gossip.dir/Gossip.cpp.o" \
"CMakeFiles/Gossip.dir/main.cpp.o" \
"CMakeFiles/Gossip.dir/Source.cpp.o"

# External object files for target Gossip
Gossip_EXTERNAL_OBJECTS =

Gossip: CMakeFiles/Gossip.dir/Gossip.cpp.o
Gossip: CMakeFiles/Gossip.dir/main.cpp.o
Gossip: CMakeFiles/Gossip.dir/Source.cpp.o
Gossip: CMakeFiles/Gossip.dir/build.make
Gossip: CMakeFiles/Gossip.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Gossip"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Gossip.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Gossip.dir/build: Gossip

.PHONY : CMakeFiles/Gossip.dir/build

CMakeFiles/Gossip.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Gossip.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Gossip.dir/clean

CMakeFiles/Gossip.dir/depend:
	cd /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/cmake-build-debug /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/cmake-build-debug /home/duncan/projects/personal/c-and-c-practice/Gossip/Gossip/cmake-build-debug/CMakeFiles/Gossip.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Gossip.dir/depend

