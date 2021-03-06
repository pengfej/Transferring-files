# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/testinf/Transferring-files/a1/linear_algebra

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/testinf/Transferring-files/a1/linear_algebra

# Include any dependencies generated for this target.
include CMakeFiles/linear_solve_test.exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/linear_solve_test.exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linear_solve_test.exe.dir/flags.make

CMakeFiles/linear_solve_test.exe.dir/DenseMatrix.cpp.o: CMakeFiles/linear_solve_test.exe.dir/flags.make
CMakeFiles/linear_solve_test.exe.dir/DenseMatrix.cpp.o: DenseMatrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/testinf/Transferring-files/a1/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/linear_solve_test.exe.dir/DenseMatrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linear_solve_test.exe.dir/DenseMatrix.cpp.o -c /home/testinf/Transferring-files/a1/linear_algebra/DenseMatrix.cpp

CMakeFiles/linear_solve_test.exe.dir/DenseMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linear_solve_test.exe.dir/DenseMatrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/testinf/Transferring-files/a1/linear_algebra/DenseMatrix.cpp > CMakeFiles/linear_solve_test.exe.dir/DenseMatrix.cpp.i

CMakeFiles/linear_solve_test.exe.dir/DenseMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linear_solve_test.exe.dir/DenseMatrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/testinf/Transferring-files/a1/linear_algebra/DenseMatrix.cpp -o CMakeFiles/linear_solve_test.exe.dir/DenseMatrix.cpp.s

CMakeFiles/linear_solve_test.exe.dir/DenseVector.cpp.o: CMakeFiles/linear_solve_test.exe.dir/flags.make
CMakeFiles/linear_solve_test.exe.dir/DenseVector.cpp.o: DenseVector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/testinf/Transferring-files/a1/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/linear_solve_test.exe.dir/DenseVector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linear_solve_test.exe.dir/DenseVector.cpp.o -c /home/testinf/Transferring-files/a1/linear_algebra/DenseVector.cpp

CMakeFiles/linear_solve_test.exe.dir/DenseVector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linear_solve_test.exe.dir/DenseVector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/testinf/Transferring-files/a1/linear_algebra/DenseVector.cpp > CMakeFiles/linear_solve_test.exe.dir/DenseVector.cpp.i

CMakeFiles/linear_solve_test.exe.dir/DenseVector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linear_solve_test.exe.dir/DenseVector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/testinf/Transferring-files/a1/linear_algebra/DenseVector.cpp -o CMakeFiles/linear_solve_test.exe.dir/DenseVector.cpp.s

CMakeFiles/linear_solve_test.exe.dir/LinearSolverInterface.cpp.o: CMakeFiles/linear_solve_test.exe.dir/flags.make
CMakeFiles/linear_solve_test.exe.dir/LinearSolverInterface.cpp.o: LinearSolverInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/testinf/Transferring-files/a1/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/linear_solve_test.exe.dir/LinearSolverInterface.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linear_solve_test.exe.dir/LinearSolverInterface.cpp.o -c /home/testinf/Transferring-files/a1/linear_algebra/LinearSolverInterface.cpp

CMakeFiles/linear_solve_test.exe.dir/LinearSolverInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linear_solve_test.exe.dir/LinearSolverInterface.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/testinf/Transferring-files/a1/linear_algebra/LinearSolverInterface.cpp > CMakeFiles/linear_solve_test.exe.dir/LinearSolverInterface.cpp.i

CMakeFiles/linear_solve_test.exe.dir/LinearSolverInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linear_solve_test.exe.dir/LinearSolverInterface.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/testinf/Transferring-files/a1/linear_algebra/LinearSolverInterface.cpp -o CMakeFiles/linear_solve_test.exe.dir/LinearSolverInterface.cpp.s

CMakeFiles/linear_solve_test.exe.dir/SymmetricMatrix.cpp.o: CMakeFiles/linear_solve_test.exe.dir/flags.make
CMakeFiles/linear_solve_test.exe.dir/SymmetricMatrix.cpp.o: SymmetricMatrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/testinf/Transferring-files/a1/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/linear_solve_test.exe.dir/SymmetricMatrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linear_solve_test.exe.dir/SymmetricMatrix.cpp.o -c /home/testinf/Transferring-files/a1/linear_algebra/SymmetricMatrix.cpp

CMakeFiles/linear_solve_test.exe.dir/SymmetricMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linear_solve_test.exe.dir/SymmetricMatrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/testinf/Transferring-files/a1/linear_algebra/SymmetricMatrix.cpp > CMakeFiles/linear_solve_test.exe.dir/SymmetricMatrix.cpp.i

CMakeFiles/linear_solve_test.exe.dir/SymmetricMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linear_solve_test.exe.dir/SymmetricMatrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/testinf/Transferring-files/a1/linear_algebra/SymmetricMatrix.cpp -o CMakeFiles/linear_solve_test.exe.dir/SymmetricMatrix.cpp.s

CMakeFiles/linear_solve_test.exe.dir/TriangleMatrix.cpp.o: CMakeFiles/linear_solve_test.exe.dir/flags.make
CMakeFiles/linear_solve_test.exe.dir/TriangleMatrix.cpp.o: TriangleMatrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/testinf/Transferring-files/a1/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/linear_solve_test.exe.dir/TriangleMatrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linear_solve_test.exe.dir/TriangleMatrix.cpp.o -c /home/testinf/Transferring-files/a1/linear_algebra/TriangleMatrix.cpp

CMakeFiles/linear_solve_test.exe.dir/TriangleMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linear_solve_test.exe.dir/TriangleMatrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/testinf/Transferring-files/a1/linear_algebra/TriangleMatrix.cpp > CMakeFiles/linear_solve_test.exe.dir/TriangleMatrix.cpp.i

CMakeFiles/linear_solve_test.exe.dir/TriangleMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linear_solve_test.exe.dir/TriangleMatrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/testinf/Transferring-files/a1/linear_algebra/TriangleMatrix.cpp -o CMakeFiles/linear_solve_test.exe.dir/TriangleMatrix.cpp.s

CMakeFiles/linear_solve_test.exe.dir/TridiagonalMatrix.cpp.o: CMakeFiles/linear_solve_test.exe.dir/flags.make
CMakeFiles/linear_solve_test.exe.dir/TridiagonalMatrix.cpp.o: TridiagonalMatrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/testinf/Transferring-files/a1/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/linear_solve_test.exe.dir/TridiagonalMatrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linear_solve_test.exe.dir/TridiagonalMatrix.cpp.o -c /home/testinf/Transferring-files/a1/linear_algebra/TridiagonalMatrix.cpp

CMakeFiles/linear_solve_test.exe.dir/TridiagonalMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linear_solve_test.exe.dir/TridiagonalMatrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/testinf/Transferring-files/a1/linear_algebra/TridiagonalMatrix.cpp > CMakeFiles/linear_solve_test.exe.dir/TridiagonalMatrix.cpp.i

CMakeFiles/linear_solve_test.exe.dir/TridiagonalMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linear_solve_test.exe.dir/TridiagonalMatrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/testinf/Transferring-files/a1/linear_algebra/TridiagonalMatrix.cpp -o CMakeFiles/linear_solve_test.exe.dir/TridiagonalMatrix.cpp.s

CMakeFiles/linear_solve_test.exe.dir/main.cpp.o: CMakeFiles/linear_solve_test.exe.dir/flags.make
CMakeFiles/linear_solve_test.exe.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/testinf/Transferring-files/a1/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/linear_solve_test.exe.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linear_solve_test.exe.dir/main.cpp.o -c /home/testinf/Transferring-files/a1/linear_algebra/main.cpp

CMakeFiles/linear_solve_test.exe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linear_solve_test.exe.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/testinf/Transferring-files/a1/linear_algebra/main.cpp > CMakeFiles/linear_solve_test.exe.dir/main.cpp.i

CMakeFiles/linear_solve_test.exe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linear_solve_test.exe.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/testinf/Transferring-files/a1/linear_algebra/main.cpp -o CMakeFiles/linear_solve_test.exe.dir/main.cpp.s

# Object files for target linear_solve_test.exe
linear_solve_test_exe_OBJECTS = \
"CMakeFiles/linear_solve_test.exe.dir/DenseMatrix.cpp.o" \
"CMakeFiles/linear_solve_test.exe.dir/DenseVector.cpp.o" \
"CMakeFiles/linear_solve_test.exe.dir/LinearSolverInterface.cpp.o" \
"CMakeFiles/linear_solve_test.exe.dir/SymmetricMatrix.cpp.o" \
"CMakeFiles/linear_solve_test.exe.dir/TriangleMatrix.cpp.o" \
"CMakeFiles/linear_solve_test.exe.dir/TridiagonalMatrix.cpp.o" \
"CMakeFiles/linear_solve_test.exe.dir/main.cpp.o"

# External object files for target linear_solve_test.exe
linear_solve_test_exe_EXTERNAL_OBJECTS =

linear_solve_test.exe: CMakeFiles/linear_solve_test.exe.dir/DenseMatrix.cpp.o
linear_solve_test.exe: CMakeFiles/linear_solve_test.exe.dir/DenseVector.cpp.o
linear_solve_test.exe: CMakeFiles/linear_solve_test.exe.dir/LinearSolverInterface.cpp.o
linear_solve_test.exe: CMakeFiles/linear_solve_test.exe.dir/SymmetricMatrix.cpp.o
linear_solve_test.exe: CMakeFiles/linear_solve_test.exe.dir/TriangleMatrix.cpp.o
linear_solve_test.exe: CMakeFiles/linear_solve_test.exe.dir/TridiagonalMatrix.cpp.o
linear_solve_test.exe: CMakeFiles/linear_solve_test.exe.dir/main.cpp.o
linear_solve_test.exe: CMakeFiles/linear_solve_test.exe.dir/build.make
linear_solve_test.exe: CMakeFiles/linear_solve_test.exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/testinf/Transferring-files/a1/linear_algebra/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable linear_solve_test.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/linear_solve_test.exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linear_solve_test.exe.dir/build: linear_solve_test.exe

.PHONY : CMakeFiles/linear_solve_test.exe.dir/build

CMakeFiles/linear_solve_test.exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/linear_solve_test.exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/linear_solve_test.exe.dir/clean

CMakeFiles/linear_solve_test.exe.dir/depend:
	cd /home/testinf/Transferring-files/a1/linear_algebra && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/testinf/Transferring-files/a1/linear_algebra /home/testinf/Transferring-files/a1/linear_algebra /home/testinf/Transferring-files/a1/linear_algebra /home/testinf/Transferring-files/a1/linear_algebra /home/testinf/Transferring-files/a1/linear_algebra/CMakeFiles/linear_solve_test.exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linear_solve_test.exe.dir/depend

