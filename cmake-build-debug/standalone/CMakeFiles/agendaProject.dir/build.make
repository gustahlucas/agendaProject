# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/gustavo/Downloads/CLion-2021.2.2/clion-2021.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/gustavo/Downloads/CLion-2021.2.2/clion-2021.2.2/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/gustavo/Área de Trabalho/progAvancada/agendaProject"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/cmake-build-debug"

# Include any dependencies generated for this target.
include standalone/CMakeFiles/agendaProject.dir/depend.make
# Include the progress variables for this target.
include standalone/CMakeFiles/agendaProject.dir/progress.make

# Include the compile flags for this target's objects.
include standalone/CMakeFiles/agendaProject.dir/flags.make

standalone/CMakeFiles/agendaProject.dir/main.cpp.o: standalone/CMakeFiles/agendaProject.dir/flags.make
standalone/CMakeFiles/agendaProject.dir/main.cpp.o: ../standalone/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/gustavo/Área de Trabalho/progAvancada/agendaProject/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object standalone/CMakeFiles/agendaProject.dir/main.cpp.o"
	cd "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/cmake-build-debug/standalone" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/agendaProject.dir/main.cpp.o -c "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/standalone/main.cpp"

standalone/CMakeFiles/agendaProject.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/agendaProject.dir/main.cpp.i"
	cd "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/cmake-build-debug/standalone" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/standalone/main.cpp" > CMakeFiles/agendaProject.dir/main.cpp.i

standalone/CMakeFiles/agendaProject.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/agendaProject.dir/main.cpp.s"
	cd "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/cmake-build-debug/standalone" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/standalone/main.cpp" -o CMakeFiles/agendaProject.dir/main.cpp.s

# Object files for target agendaProject
agendaProject_OBJECTS = \
"CMakeFiles/agendaProject.dir/main.cpp.o"

# External object files for target agendaProject
agendaProject_EXTERNAL_OBJECTS =

standalone/agendaProject: standalone/CMakeFiles/agendaProject.dir/main.cpp.o
standalone/agendaProject: standalone/CMakeFiles/agendaProject.dir/build.make
standalone/agendaProject: sources/libagendalib.a
standalone/agendaProject: standalone/CMakeFiles/agendaProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/gustavo/Área de Trabalho/progAvancada/agendaProject/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable agendaProject"
	cd "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/cmake-build-debug/standalone" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/agendaProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
standalone/CMakeFiles/agendaProject.dir/build: standalone/agendaProject
.PHONY : standalone/CMakeFiles/agendaProject.dir/build

standalone/CMakeFiles/agendaProject.dir/clean:
	cd "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/cmake-build-debug/standalone" && $(CMAKE_COMMAND) -P CMakeFiles/agendaProject.dir/cmake_clean.cmake
.PHONY : standalone/CMakeFiles/agendaProject.dir/clean

standalone/CMakeFiles/agendaProject.dir/depend:
	cd "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/gustavo/Área de Trabalho/progAvancada/agendaProject" "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/standalone" "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/cmake-build-debug" "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/cmake-build-debug/standalone" "/home/gustavo/Área de Trabalho/progAvancada/agendaProject/cmake-build-debug/standalone/CMakeFiles/agendaProject.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : standalone/CMakeFiles/agendaProject.dir/depend

