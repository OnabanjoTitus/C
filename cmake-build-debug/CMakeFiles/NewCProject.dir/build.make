# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\DELL\CLionProjects\NewCproject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\DELL\CLionProjects\NewCproject\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NewCProject.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NewCProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NewCProject.dir/flags.make

CMakeFiles/NewCProject.dir/Chapter6ExercisesCDietel/DuplicateElimination.c.obj: CMakeFiles/NewCProject.dir/flags.make
CMakeFiles/NewCProject.dir/Chapter6ExercisesCDietel/DuplicateElimination.c.obj: ../Chapter6ExercisesCDietel/DuplicateElimination.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\DELL\CLionProjects\NewCproject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/NewCProject.dir/Chapter6ExercisesCDietel/DuplicateElimination.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\NewCProject.dir\Chapter6ExercisesCDietel\DuplicateElimination.c.obj -c C:\Users\DELL\CLionProjects\NewCproject\Chapter6ExercisesCDietel\DuplicateElimination.c

CMakeFiles/NewCProject.dir/Chapter6ExercisesCDietel/DuplicateElimination.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NewCProject.dir/Chapter6ExercisesCDietel/DuplicateElimination.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\DELL\CLionProjects\NewCproject\Chapter6ExercisesCDietel\DuplicateElimination.c > CMakeFiles\NewCProject.dir\Chapter6ExercisesCDietel\DuplicateElimination.c.i

CMakeFiles/NewCProject.dir/Chapter6ExercisesCDietel/DuplicateElimination.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NewCProject.dir/Chapter6ExercisesCDietel/DuplicateElimination.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\DELL\CLionProjects\NewCproject\Chapter6ExercisesCDietel\DuplicateElimination.c -o CMakeFiles\NewCProject.dir\Chapter6ExercisesCDietel\DuplicateElimination.c.s

# Object files for target NewCProject
NewCProject_OBJECTS = \
"CMakeFiles/NewCProject.dir/Chapter6ExercisesCDietel/DuplicateElimination.c.obj"

# External object files for target NewCProject
NewCProject_EXTERNAL_OBJECTS =

NewCProject.exe: CMakeFiles/NewCProject.dir/Chapter6ExercisesCDietel/DuplicateElimination.c.obj
NewCProject.exe: CMakeFiles/NewCProject.dir/build.make
NewCProject.exe: CMakeFiles/NewCProject.dir/linklibs.rsp
NewCProject.exe: CMakeFiles/NewCProject.dir/objects1.rsp
NewCProject.exe: CMakeFiles/NewCProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\DELL\CLionProjects\NewCproject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable NewCProject.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\NewCProject.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NewCProject.dir/build: NewCProject.exe

.PHONY : CMakeFiles/NewCProject.dir/build

CMakeFiles/NewCProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\NewCProject.dir\cmake_clean.cmake
.PHONY : CMakeFiles/NewCProject.dir/clean

CMakeFiles/NewCProject.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\DELL\CLionProjects\NewCproject C:\Users\DELL\CLionProjects\NewCproject C:\Users\DELL\CLionProjects\NewCproject\cmake-build-debug C:\Users\DELL\CLionProjects\NewCproject\cmake-build-debug C:\Users\DELL\CLionProjects\NewCproject\cmake-build-debug\CMakeFiles\NewCProject.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NewCProject.dir/depend
