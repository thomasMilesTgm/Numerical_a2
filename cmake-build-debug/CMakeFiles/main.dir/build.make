# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/tmiles/Tools/clion-2017.3.4/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/tmiles/Tools/clion-2017.3.4/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tmiles/Code/Numerical_Programming/A2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/src/newton_ralphson.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/newton_ralphson.c.o: ../src/newton_ralphson.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/main.dir/src/newton_ralphson.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/newton_ralphson.c.o   -c /home/tmiles/Code/Numerical_Programming/A2/src/newton_ralphson.c

CMakeFiles/main.dir/src/newton_ralphson.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/newton_ralphson.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tmiles/Code/Numerical_Programming/A2/src/newton_ralphson.c > CMakeFiles/main.dir/src/newton_ralphson.c.i

CMakeFiles/main.dir/src/newton_ralphson.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/newton_ralphson.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tmiles/Code/Numerical_Programming/A2/src/newton_ralphson.c -o CMakeFiles/main.dir/src/newton_ralphson.c.s

CMakeFiles/main.dir/src/newton_ralphson.c.o.requires:

.PHONY : CMakeFiles/main.dir/src/newton_ralphson.c.o.requires

CMakeFiles/main.dir/src/newton_ralphson.c.o.provides: CMakeFiles/main.dir/src/newton_ralphson.c.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/newton_ralphson.c.o.provides.build
.PHONY : CMakeFiles/main.dir/src/newton_ralphson.c.o.provides

CMakeFiles/main.dir/src/newton_ralphson.c.o.provides.build: CMakeFiles/main.dir/src/newton_ralphson.c.o


CMakeFiles/main.dir/src/tasks.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/tasks.c.o: ../src/tasks.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/main.dir/src/tasks.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/tasks.c.o   -c /home/tmiles/Code/Numerical_Programming/A2/src/tasks.c

CMakeFiles/main.dir/src/tasks.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/tasks.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tmiles/Code/Numerical_Programming/A2/src/tasks.c > CMakeFiles/main.dir/src/tasks.c.i

CMakeFiles/main.dir/src/tasks.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/tasks.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tmiles/Code/Numerical_Programming/A2/src/tasks.c -o CMakeFiles/main.dir/src/tasks.c.s

CMakeFiles/main.dir/src/tasks.c.o.requires:

.PHONY : CMakeFiles/main.dir/src/tasks.c.o.requires

CMakeFiles/main.dir/src/tasks.c.o.provides: CMakeFiles/main.dir/src/tasks.c.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/tasks.c.o.provides.build
.PHONY : CMakeFiles/main.dir/src/tasks.c.o.provides

CMakeFiles/main.dir/src/tasks.c.o.provides.build: CMakeFiles/main.dir/src/tasks.c.o


CMakeFiles/main.dir/src/thomas.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/thomas.c.o: ../src/thomas.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/main.dir/src/thomas.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/thomas.c.o   -c /home/tmiles/Code/Numerical_Programming/A2/src/thomas.c

CMakeFiles/main.dir/src/thomas.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/thomas.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tmiles/Code/Numerical_Programming/A2/src/thomas.c > CMakeFiles/main.dir/src/thomas.c.i

CMakeFiles/main.dir/src/thomas.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/thomas.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tmiles/Code/Numerical_Programming/A2/src/thomas.c -o CMakeFiles/main.dir/src/thomas.c.s

CMakeFiles/main.dir/src/thomas.c.o.requires:

.PHONY : CMakeFiles/main.dir/src/thomas.c.o.requires

CMakeFiles/main.dir/src/thomas.c.o.provides: CMakeFiles/main.dir/src/thomas.c.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/thomas.c.o.provides.build
.PHONY : CMakeFiles/main.dir/src/thomas.c.o.provides

CMakeFiles/main.dir/src/thomas.c.o.provides.build: CMakeFiles/main.dir/src/thomas.c.o


CMakeFiles/main.dir/src/interp.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/interp.c.o: ../src/interp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/main.dir/src/interp.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/interp.c.o   -c /home/tmiles/Code/Numerical_Programming/A2/src/interp.c

CMakeFiles/main.dir/src/interp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/interp.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tmiles/Code/Numerical_Programming/A2/src/interp.c > CMakeFiles/main.dir/src/interp.c.i

CMakeFiles/main.dir/src/interp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/interp.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tmiles/Code/Numerical_Programming/A2/src/interp.c -o CMakeFiles/main.dir/src/interp.c.s

CMakeFiles/main.dir/src/interp.c.o.requires:

.PHONY : CMakeFiles/main.dir/src/interp.c.o.requires

CMakeFiles/main.dir/src/interp.c.o.provides: CMakeFiles/main.dir/src/interp.c.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/interp.c.o.provides.build
.PHONY : CMakeFiles/main.dir/src/interp.c.o.provides

CMakeFiles/main.dir/src/interp.c.o.provides.build: CMakeFiles/main.dir/src/interp.c.o


CMakeFiles/main.dir/src/diff.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/diff.c.o: ../src/diff.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/main.dir/src/diff.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/diff.c.o   -c /home/tmiles/Code/Numerical_Programming/A2/src/diff.c

CMakeFiles/main.dir/src/diff.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/diff.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tmiles/Code/Numerical_Programming/A2/src/diff.c > CMakeFiles/main.dir/src/diff.c.i

CMakeFiles/main.dir/src/diff.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/diff.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tmiles/Code/Numerical_Programming/A2/src/diff.c -o CMakeFiles/main.dir/src/diff.c.s

CMakeFiles/main.dir/src/diff.c.o.requires:

.PHONY : CMakeFiles/main.dir/src/diff.c.o.requires

CMakeFiles/main.dir/src/diff.c.o.provides: CMakeFiles/main.dir/src/diff.c.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/diff.c.o.provides.build
.PHONY : CMakeFiles/main.dir/src/diff.c.o.provides

CMakeFiles/main.dir/src/diff.c.o.provides.build: CMakeFiles/main.dir/src/diff.c.o


CMakeFiles/main.dir/src/utilities.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/utilities.c.o: ../src/utilities.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/main.dir/src/utilities.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/utilities.c.o   -c /home/tmiles/Code/Numerical_Programming/A2/src/utilities.c

CMakeFiles/main.dir/src/utilities.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/utilities.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tmiles/Code/Numerical_Programming/A2/src/utilities.c > CMakeFiles/main.dir/src/utilities.c.i

CMakeFiles/main.dir/src/utilities.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/utilities.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tmiles/Code/Numerical_Programming/A2/src/utilities.c -o CMakeFiles/main.dir/src/utilities.c.s

CMakeFiles/main.dir/src/utilities.c.o.requires:

.PHONY : CMakeFiles/main.dir/src/utilities.c.o.requires

CMakeFiles/main.dir/src/utilities.c.o.provides: CMakeFiles/main.dir/src/utilities.c.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/utilities.c.o.provides.build
.PHONY : CMakeFiles/main.dir/src/utilities.c.o.provides

CMakeFiles/main.dir/src/utilities.c.o.provides.build: CMakeFiles/main.dir/src/utilities.c.o


CMakeFiles/main.dir/src/testing.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/testing.c.o: ../src/testing.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/main.dir/src/testing.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/src/testing.c.o   -c /home/tmiles/Code/Numerical_Programming/A2/src/testing.c

CMakeFiles/main.dir/src/testing.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/testing.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tmiles/Code/Numerical_Programming/A2/src/testing.c > CMakeFiles/main.dir/src/testing.c.i

CMakeFiles/main.dir/src/testing.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/testing.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tmiles/Code/Numerical_Programming/A2/src/testing.c -o CMakeFiles/main.dir/src/testing.c.s

CMakeFiles/main.dir/src/testing.c.o.requires:

.PHONY : CMakeFiles/main.dir/src/testing.c.o.requires

CMakeFiles/main.dir/src/testing.c.o.provides: CMakeFiles/main.dir/src/testing.c.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/testing.c.o.provides.build
.PHONY : CMakeFiles/main.dir/src/testing.c.o.provides

CMakeFiles/main.dir/src/testing.c.o.provides.build: CMakeFiles/main.dir/src/testing.c.o


# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/newton_ralphson.c.o" \
"CMakeFiles/main.dir/src/tasks.c.o" \
"CMakeFiles/main.dir/src/thomas.c.o" \
"CMakeFiles/main.dir/src/interp.c.o" \
"CMakeFiles/main.dir/src/diff.c.o" \
"CMakeFiles/main.dir/src/utilities.c.o" \
"CMakeFiles/main.dir/src/testing.c.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/src/newton_ralphson.c.o
main: CMakeFiles/main.dir/src/tasks.c.o
main: CMakeFiles/main.dir/src/thomas.c.o
main: CMakeFiles/main.dir/src/interp.c.o
main: CMakeFiles/main.dir/src/diff.c.o
main: CMakeFiles/main.dir/src/utilities.c.o
main: CMakeFiles/main.dir/src/testing.c.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/newton_ralphson.c.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/tasks.c.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/thomas.c.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/interp.c.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/diff.c.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/utilities.c.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/testing.c.o.requires

.PHONY : CMakeFiles/main.dir/requires

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tmiles/Code/Numerical_Programming/A2 /home/tmiles/Code/Numerical_Programming/A2 /home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug /home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug /home/tmiles/Code/Numerical_Programming/A2/cmake-build-debug/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

