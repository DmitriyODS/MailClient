# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /cygdrive/c/Users/osipo/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/osipo/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/osipo/Projects/MailClient

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/osipo/Projects/MailClient/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MailClient.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MailClient.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MailClient.dir/flags.make

CMakeFiles/MailClient.dir/main.cpp.o: CMakeFiles/MailClient.dir/flags.make
CMakeFiles/MailClient.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/osipo/Projects/MailClient/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MailClient.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MailClient.dir/main.cpp.o -c /cygdrive/c/Users/osipo/Projects/MailClient/main.cpp

CMakeFiles/MailClient.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MailClient.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/osipo/Projects/MailClient/main.cpp > CMakeFiles/MailClient.dir/main.cpp.i

CMakeFiles/MailClient.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MailClient.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/osipo/Projects/MailClient/main.cpp -o CMakeFiles/MailClient.dir/main.cpp.s

CMakeFiles/MailClient.dir/Libraries/MyString/MyString.cpp.o: CMakeFiles/MailClient.dir/flags.make
CMakeFiles/MailClient.dir/Libraries/MyString/MyString.cpp.o: ../Libraries/MyString/MyString.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/osipo/Projects/MailClient/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MailClient.dir/Libraries/MyString/MyString.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MailClient.dir/Libraries/MyString/MyString.cpp.o -c /cygdrive/c/Users/osipo/Projects/MailClient/Libraries/MyString/MyString.cpp

CMakeFiles/MailClient.dir/Libraries/MyString/MyString.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MailClient.dir/Libraries/MyString/MyString.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/osipo/Projects/MailClient/Libraries/MyString/MyString.cpp > CMakeFiles/MailClient.dir/Libraries/MyString/MyString.cpp.i

CMakeFiles/MailClient.dir/Libraries/MyString/MyString.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MailClient.dir/Libraries/MyString/MyString.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/osipo/Projects/MailClient/Libraries/MyString/MyString.cpp -o CMakeFiles/MailClient.dir/Libraries/MyString/MyString.cpp.s

CMakeFiles/MailClient.dir/Models/User/User.cpp.o: CMakeFiles/MailClient.dir/flags.make
CMakeFiles/MailClient.dir/Models/User/User.cpp.o: ../Models/User/User.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/osipo/Projects/MailClient/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MailClient.dir/Models/User/User.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MailClient.dir/Models/User/User.cpp.o -c /cygdrive/c/Users/osipo/Projects/MailClient/Models/User/User.cpp

CMakeFiles/MailClient.dir/Models/User/User.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MailClient.dir/Models/User/User.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/osipo/Projects/MailClient/Models/User/User.cpp > CMakeFiles/MailClient.dir/Models/User/User.cpp.i

CMakeFiles/MailClient.dir/Models/User/User.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MailClient.dir/Models/User/User.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/osipo/Projects/MailClient/Models/User/User.cpp -o CMakeFiles/MailClient.dir/Models/User/User.cpp.s

CMakeFiles/MailClient.dir/Libraries/MyString/IteratorMyString.cpp.o: CMakeFiles/MailClient.dir/flags.make
CMakeFiles/MailClient.dir/Libraries/MyString/IteratorMyString.cpp.o: ../Libraries/MyString/IteratorMyString.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/osipo/Projects/MailClient/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/MailClient.dir/Libraries/MyString/IteratorMyString.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MailClient.dir/Libraries/MyString/IteratorMyString.cpp.o -c /cygdrive/c/Users/osipo/Projects/MailClient/Libraries/MyString/IteratorMyString.cpp

CMakeFiles/MailClient.dir/Libraries/MyString/IteratorMyString.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MailClient.dir/Libraries/MyString/IteratorMyString.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/osipo/Projects/MailClient/Libraries/MyString/IteratorMyString.cpp > CMakeFiles/MailClient.dir/Libraries/MyString/IteratorMyString.cpp.i

CMakeFiles/MailClient.dir/Libraries/MyString/IteratorMyString.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MailClient.dir/Libraries/MyString/IteratorMyString.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/osipo/Projects/MailClient/Libraries/MyString/IteratorMyString.cpp -o CMakeFiles/MailClient.dir/Libraries/MyString/IteratorMyString.cpp.s

# Object files for target MailClient
MailClient_OBJECTS = \
"CMakeFiles/MailClient.dir/main.cpp.o" \
"CMakeFiles/MailClient.dir/Libraries/MyString/MyString.cpp.o" \
"CMakeFiles/MailClient.dir/Models/User/User.cpp.o" \
"CMakeFiles/MailClient.dir/Libraries/MyString/IteratorMyString.cpp.o"

# External object files for target MailClient
MailClient_EXTERNAL_OBJECTS =

MailClient.exe: CMakeFiles/MailClient.dir/main.cpp.o
MailClient.exe: CMakeFiles/MailClient.dir/Libraries/MyString/MyString.cpp.o
MailClient.exe: CMakeFiles/MailClient.dir/Models/User/User.cpp.o
MailClient.exe: CMakeFiles/MailClient.dir/Libraries/MyString/IteratorMyString.cpp.o
MailClient.exe: CMakeFiles/MailClient.dir/build.make
MailClient.exe: CMakeFiles/MailClient.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/osipo/Projects/MailClient/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable MailClient.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MailClient.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MailClient.dir/build: MailClient.exe

.PHONY : CMakeFiles/MailClient.dir/build

CMakeFiles/MailClient.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MailClient.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MailClient.dir/clean

CMakeFiles/MailClient.dir/depend:
	cd /cygdrive/c/Users/osipo/Projects/MailClient/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/osipo/Projects/MailClient /cygdrive/c/Users/osipo/Projects/MailClient /cygdrive/c/Users/osipo/Projects/MailClient/cmake-build-debug /cygdrive/c/Users/osipo/Projects/MailClient/cmake-build-debug /cygdrive/c/Users/osipo/Projects/MailClient/cmake-build-debug/CMakeFiles/MailClient.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MailClient.dir/depend

