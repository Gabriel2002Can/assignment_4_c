# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = C:\Users\gabri\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\gabri\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/zombieSim.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/zombieSim.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/zombieSim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zombieSim.dir/flags.make

CMakeFiles/zombieSim.dir/src/main.cpp.obj: CMakeFiles/zombieSim.dir/flags.make
CMakeFiles/zombieSim.dir/src/main.cpp.obj: C:/Users/gabri/Downloads/assignment_4_c-master/assignment_4_c-master/src/main.cpp
CMakeFiles/zombieSim.dir/src/main.cpp.obj: CMakeFiles/zombieSim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/zombieSim.dir/src/main.cpp.obj"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/zombieSim.dir/src/main.cpp.obj -MF CMakeFiles\zombieSim.dir\src\main.cpp.obj.d -o CMakeFiles\zombieSim.dir\src\main.cpp.obj -c C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\main.cpp

CMakeFiles/zombieSim.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/zombieSim.dir/src/main.cpp.i"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\main.cpp > CMakeFiles\zombieSim.dir\src\main.cpp.i

CMakeFiles/zombieSim.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/zombieSim.dir/src/main.cpp.s"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\main.cpp -o CMakeFiles\zombieSim.dir\src\main.cpp.s

CMakeFiles/zombieSim.dir/src/City.cpp.obj: CMakeFiles/zombieSim.dir/flags.make
CMakeFiles/zombieSim.dir/src/City.cpp.obj: C:/Users/gabri/Downloads/assignment_4_c-master/assignment_4_c-master/src/City.cpp
CMakeFiles/zombieSim.dir/src/City.cpp.obj: CMakeFiles/zombieSim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/zombieSim.dir/src/City.cpp.obj"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/zombieSim.dir/src/City.cpp.obj -MF CMakeFiles\zombieSim.dir\src\City.cpp.obj.d -o CMakeFiles\zombieSim.dir\src\City.cpp.obj -c C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\City.cpp

CMakeFiles/zombieSim.dir/src/City.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/zombieSim.dir/src/City.cpp.i"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\City.cpp > CMakeFiles\zombieSim.dir\src\City.cpp.i

CMakeFiles/zombieSim.dir/src/City.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/zombieSim.dir/src/City.cpp.s"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\City.cpp -o CMakeFiles\zombieSim.dir\src\City.cpp.s

CMakeFiles/zombieSim.dir/src/Organism.cpp.obj: CMakeFiles/zombieSim.dir/flags.make
CMakeFiles/zombieSim.dir/src/Organism.cpp.obj: C:/Users/gabri/Downloads/assignment_4_c-master/assignment_4_c-master/src/Organism.cpp
CMakeFiles/zombieSim.dir/src/Organism.cpp.obj: CMakeFiles/zombieSim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/zombieSim.dir/src/Organism.cpp.obj"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/zombieSim.dir/src/Organism.cpp.obj -MF CMakeFiles\zombieSim.dir\src\Organism.cpp.obj.d -o CMakeFiles\zombieSim.dir\src\Organism.cpp.obj -c C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\Organism.cpp

CMakeFiles/zombieSim.dir/src/Organism.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/zombieSim.dir/src/Organism.cpp.i"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\Organism.cpp > CMakeFiles\zombieSim.dir\src\Organism.cpp.i

CMakeFiles/zombieSim.dir/src/Organism.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/zombieSim.dir/src/Organism.cpp.s"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\Organism.cpp -o CMakeFiles\zombieSim.dir\src\Organism.cpp.s

CMakeFiles/zombieSim.dir/src/Zombie.cpp.obj: CMakeFiles/zombieSim.dir/flags.make
CMakeFiles/zombieSim.dir/src/Zombie.cpp.obj: C:/Users/gabri/Downloads/assignment_4_c-master/assignment_4_c-master/src/Zombie.cpp
CMakeFiles/zombieSim.dir/src/Zombie.cpp.obj: CMakeFiles/zombieSim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/zombieSim.dir/src/Zombie.cpp.obj"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/zombieSim.dir/src/Zombie.cpp.obj -MF CMakeFiles\zombieSim.dir\src\Zombie.cpp.obj.d -o CMakeFiles\zombieSim.dir\src\Zombie.cpp.obj -c C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\Zombie.cpp

CMakeFiles/zombieSim.dir/src/Zombie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/zombieSim.dir/src/Zombie.cpp.i"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\Zombie.cpp > CMakeFiles\zombieSim.dir\src\Zombie.cpp.i

CMakeFiles/zombieSim.dir/src/Zombie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/zombieSim.dir/src/Zombie.cpp.s"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\Zombie.cpp -o CMakeFiles\zombieSim.dir\src\Zombie.cpp.s

CMakeFiles/zombieSim.dir/src/Human.cpp.obj: CMakeFiles/zombieSim.dir/flags.make
CMakeFiles/zombieSim.dir/src/Human.cpp.obj: C:/Users/gabri/Downloads/assignment_4_c-master/assignment_4_c-master/src/Human.cpp
CMakeFiles/zombieSim.dir/src/Human.cpp.obj: CMakeFiles/zombieSim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/zombieSim.dir/src/Human.cpp.obj"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/zombieSim.dir/src/Human.cpp.obj -MF CMakeFiles\zombieSim.dir\src\Human.cpp.obj.d -o CMakeFiles\zombieSim.dir\src\Human.cpp.obj -c C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\Human.cpp

CMakeFiles/zombieSim.dir/src/Human.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/zombieSim.dir/src/Human.cpp.i"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\Human.cpp > CMakeFiles\zombieSim.dir\src\Human.cpp.i

CMakeFiles/zombieSim.dir/src/Human.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/zombieSim.dir/src/Human.cpp.s"
	C:\Users\gabri\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\src\Human.cpp -o CMakeFiles\zombieSim.dir\src\Human.cpp.s

# Object files for target zombieSim
zombieSim_OBJECTS = \
"CMakeFiles/zombieSim.dir/src/main.cpp.obj" \
"CMakeFiles/zombieSim.dir/src/City.cpp.obj" \
"CMakeFiles/zombieSim.dir/src/Organism.cpp.obj" \
"CMakeFiles/zombieSim.dir/src/Zombie.cpp.obj" \
"CMakeFiles/zombieSim.dir/src/Human.cpp.obj"

# External object files for target zombieSim
zombieSim_EXTERNAL_OBJECTS =

zombieSim.exe: CMakeFiles/zombieSim.dir/src/main.cpp.obj
zombieSim.exe: CMakeFiles/zombieSim.dir/src/City.cpp.obj
zombieSim.exe: CMakeFiles/zombieSim.dir/src/Organism.cpp.obj
zombieSim.exe: CMakeFiles/zombieSim.dir/src/Zombie.cpp.obj
zombieSim.exe: CMakeFiles/zombieSim.dir/src/Human.cpp.obj
zombieSim.exe: CMakeFiles/zombieSim.dir/build.make
zombieSim.exe: CMakeFiles/zombieSim.dir/linkLibs.rsp
zombieSim.exe: CMakeFiles/zombieSim.dir/objects1.rsp
zombieSim.exe: CMakeFiles/zombieSim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable zombieSim.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\zombieSim.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zombieSim.dir/build: zombieSim.exe
.PHONY : CMakeFiles/zombieSim.dir/build

CMakeFiles/zombieSim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\zombieSim.dir\cmake_clean.cmake
.PHONY : CMakeFiles/zombieSim.dir/clean

CMakeFiles/zombieSim.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\cmake-build-debug C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\cmake-build-debug C:\Users\gabri\Downloads\assignment_4_c-master\assignment_4_c-master\cmake-build-debug\CMakeFiles\zombieSim.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/zombieSim.dir/depend

