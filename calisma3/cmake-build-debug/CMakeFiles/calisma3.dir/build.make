# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /snap/clion/284/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/284/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/calisma3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/calisma3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/calisma3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calisma3.dir/flags.make

CMakeFiles/calisma3.dir/main.cpp.o: CMakeFiles/calisma3.dir/flags.make
CMakeFiles/calisma3.dir/main.cpp.o: /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/main.cpp
CMakeFiles/calisma3.dir/main.cpp.o: CMakeFiles/calisma3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calisma3.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calisma3.dir/main.cpp.o -MF CMakeFiles/calisma3.dir/main.cpp.o.d -o CMakeFiles/calisma3.dir/main.cpp.o -c /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/main.cpp

CMakeFiles/calisma3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/calisma3.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/main.cpp > CMakeFiles/calisma3.dir/main.cpp.i

CMakeFiles/calisma3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/calisma3.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/main.cpp -o CMakeFiles/calisma3.dir/main.cpp.s

CMakeFiles/calisma3.dir/calisma_3.cpp.o: CMakeFiles/calisma3.dir/flags.make
CMakeFiles/calisma3.dir/calisma_3.cpp.o: /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/calisma_3.cpp
CMakeFiles/calisma3.dir/calisma_3.cpp.o: CMakeFiles/calisma3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/calisma3.dir/calisma_3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calisma3.dir/calisma_3.cpp.o -MF CMakeFiles/calisma3.dir/calisma_3.cpp.o.d -o CMakeFiles/calisma3.dir/calisma_3.cpp.o -c /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/calisma_3.cpp

CMakeFiles/calisma3.dir/calisma_3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/calisma3.dir/calisma_3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/calisma_3.cpp > CMakeFiles/calisma3.dir/calisma_3.cpp.i

CMakeFiles/calisma3.dir/calisma_3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/calisma3.dir/calisma_3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/calisma_3.cpp -o CMakeFiles/calisma3.dir/calisma_3.cpp.s

# Object files for target calisma3
calisma3_OBJECTS = \
"CMakeFiles/calisma3.dir/main.cpp.o" \
"CMakeFiles/calisma3.dir/calisma_3.cpp.o"

# External object files for target calisma3
calisma3_EXTERNAL_OBJECTS =

calisma3: CMakeFiles/calisma3.dir/main.cpp.o
calisma3: CMakeFiles/calisma3.dir/calisma_3.cpp.o
calisma3: CMakeFiles/calisma3.dir/build.make
calisma3: CMakeFiles/calisma3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable calisma3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calisma3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calisma3.dir/build: calisma3
.PHONY : CMakeFiles/calisma3.dir/build

CMakeFiles/calisma3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calisma3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calisma3.dir/clean

CMakeFiles/calisma3.dir/depend:
	cd /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3 /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3 /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/cmake-build-debug /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/cmake-build-debug /home/alaz/Documents/GitHub/CPlus_tutorial/calisma3/cmake-build-debug/CMakeFiles/calisma3.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/calisma3.dir/depend

