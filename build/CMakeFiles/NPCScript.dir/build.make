# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = /usr/sbin/cmake

# The command to remove a file.
RM = /usr/sbin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /compilers/NPCScript

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /compilers/NPCScript/build

# Include any dependencies generated for this target.
include CMakeFiles/NPCScript.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/NPCScript.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/NPCScript.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NPCScript.dir/flags.make

antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp: /compilers/NPCScript/NPCScript.g4
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/compilers/NPCScript/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building NPCScript with ANTLR 4.13.2"
	cd /compilers/NPCScript && /usr/sbin/java -jar /compilers/NPCScript/antlr-4.13.2-complete.jar /compilers/NPCScript/NPCScript.g4 -o /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript -no-listener -Dlanguage=Cpp -listener -visitor

antlr4cpp_generated_src/NPCScript/NPCScriptLexer.tokens: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptLexer.tokens

antlr4cpp_generated_src/NPCScript/NPCScriptLexer.h: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptLexer.h

antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp

antlr4cpp_generated_src/NPCScript/NPCScriptParser.h: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptParser.h

antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp

antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.h: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.h

antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp

antlr4cpp_generated_src/NPCScript/NPCScriptListener.h: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptListener.h

antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp

antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.h: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.h

antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp

antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.h: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.h

antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp

CMakeFiles/NPCScript.dir/codegen:
.PHONY : CMakeFiles/NPCScript.dir/codegen

CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.o: CMakeFiles/NPCScript.dir/flags.make
CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.o: /compilers/NPCScript/src/NPCScriptIR.cpp
CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.o: CMakeFiles/NPCScript.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/NPCScript/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.o -MF CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.o.d -o CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.o -c /compilers/NPCScript/src/NPCScriptIR.cpp

CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/NPCScript/src/NPCScriptIR.cpp > CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.i

CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/NPCScript/src/NPCScriptIR.cpp -o CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.s

CMakeFiles/NPCScript.dir/src/main.cpp.o: CMakeFiles/NPCScript.dir/flags.make
CMakeFiles/NPCScript.dir/src/main.cpp.o: /compilers/NPCScript/src/main.cpp
CMakeFiles/NPCScript.dir/src/main.cpp.o: CMakeFiles/NPCScript.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/NPCScript/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/NPCScript.dir/src/main.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NPCScript.dir/src/main.cpp.o -MF CMakeFiles/NPCScript.dir/src/main.cpp.o.d -o CMakeFiles/NPCScript.dir/src/main.cpp.o -c /compilers/NPCScript/src/main.cpp

CMakeFiles/NPCScript.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NPCScript.dir/src/main.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/NPCScript/src/main.cpp > CMakeFiles/NPCScript.dir/src/main.cpp.i

CMakeFiles/NPCScript.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NPCScript.dir/src/main.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/NPCScript/src/main.cpp -o CMakeFiles/NPCScript.dir/src/main.cpp.s

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.o: CMakeFiles/NPCScript.dir/flags.make
CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.o: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp
CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.o: CMakeFiles/NPCScript.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/NPCScript/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.o -MF CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.o.d -o CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.o -c /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp > CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.i

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp -o CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.s

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.o: CMakeFiles/NPCScript.dir/flags.make
CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.o: antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp
CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.o: CMakeFiles/NPCScript.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/NPCScript/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.o -MF CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.o.d -o CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.o -c /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp > CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.i

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp -o CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.s

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.o: CMakeFiles/NPCScript.dir/flags.make
CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.o: antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp
CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.o: CMakeFiles/NPCScript.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/NPCScript/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.o -MF CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.o.d -o CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.o -c /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp > CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.i

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp -o CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.s

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.o: CMakeFiles/NPCScript.dir/flags.make
CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.o: antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp
CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.o: CMakeFiles/NPCScript.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/NPCScript/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.o -MF CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.o.d -o CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.o -c /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp > CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.i

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp -o CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.s

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.o: CMakeFiles/NPCScript.dir/flags.make
CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.o: antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp
CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.o: CMakeFiles/NPCScript.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/NPCScript/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.o -MF CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.o.d -o CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.o -c /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp > CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.i

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp -o CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.s

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.o: CMakeFiles/NPCScript.dir/flags.make
CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.o: antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp
CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.o: CMakeFiles/NPCScript.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/NPCScript/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.o -MF CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.o.d -o CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.o -c /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp > CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.i

CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/NPCScript/build/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp -o CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.s

# Object files for target NPCScript
NPCScript_OBJECTS = \
"CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.o" \
"CMakeFiles/NPCScript.dir/src/main.cpp.o" \
"CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.o" \
"CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.o" \
"CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.o" \
"CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.o" \
"CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.o" \
"CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.o"

# External object files for target NPCScript
NPCScript_EXTERNAL_OBJECTS =

NPCScript: CMakeFiles/NPCScript.dir/src/NPCScriptIR.cpp.o
NPCScript: CMakeFiles/NPCScript.dir/src/main.cpp.o
NPCScript: CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp.o
NPCScript: CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp.o
NPCScript: CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp.o
NPCScript: CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp.o
NPCScript: CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp.o
NPCScript: CMakeFiles/NPCScript.dir/antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp.o
NPCScript: CMakeFiles/NPCScript.dir/build.make
NPCScript: CMakeFiles/NPCScript.dir/compiler_depend.ts
NPCScript: /usr/local/lib/libLLVMCore.a
NPCScript: /usr/local/lib/libLLVMExecutionEngine.a
NPCScript: /usr/local/lib/libLLVMObject.a
NPCScript: /usr/local/lib/libLLVMOrcJIT.a
NPCScript: /usr/local/lib/libLLVMSupport.a
NPCScript: /usr/local/lib/libLLVMTargetParser.a
NPCScript: /usr/local/lib/libLLVMX86CodeGen.a
NPCScript: /usr/local/lib/libLLVMX86AsmParser.a
NPCScript: /usr/local/lib/libLLVMX86Desc.a
NPCScript: /usr/local/lib/libLLVMX86Disassembler.a
NPCScript: /usr/local/lib/libLLVMX86Info.a
NPCScript: /usr/local/lib/libLLVMExecutionEngine.a
NPCScript: /usr/local/lib/libLLVMRuntimeDyld.a
NPCScript: /usr/local/lib/libLLVMPasses.a
NPCScript: /usr/local/lib/libLLVMCoroutines.a
NPCScript: /usr/local/lib/libLLVMHipStdPar.a
NPCScript: /usr/local/lib/libLLVMipo.a
NPCScript: /usr/local/lib/libLLVMFrontendOpenMP.a
NPCScript: /usr/local/lib/libLLVMFrontendOffloading.a
NPCScript: /usr/local/lib/libLLVMObjectYAML.a
NPCScript: /usr/local/lib/libLLVMFrontendAtomic.a
NPCScript: /usr/local/lib/libLLVMLinker.a
NPCScript: /usr/local/lib/libLLVMVectorize.a
NPCScript: /usr/local/lib/libLLVMSandboxIR.a
NPCScript: /usr/local/lib/libLLVMJITLink.a
NPCScript: /usr/local/lib/libLLVMOrcTargetProcess.a
NPCScript: /usr/local/lib/libLLVMOrcShared.a
NPCScript: /usr/local/lib/libLLVMWindowsDriver.a
NPCScript: /usr/local/lib/libLLVMOption.a
NPCScript: /usr/local/lib/libLLVMAsmPrinter.a
NPCScript: /usr/local/lib/libLLVMCFGuard.a
NPCScript: /usr/local/lib/libLLVMGlobalISel.a
NPCScript: /usr/local/lib/libLLVMIRPrinter.a
NPCScript: /usr/local/lib/libLLVMInstrumentation.a
NPCScript: /usr/local/lib/libLLVMSelectionDAG.a
NPCScript: /usr/local/lib/libLLVMCodeGen.a
NPCScript: /usr/local/lib/libLLVMTarget.a
NPCScript: /usr/local/lib/libLLVMScalarOpts.a
NPCScript: /usr/local/lib/libLLVMAggressiveInstCombine.a
NPCScript: /usr/local/lib/libLLVMInstCombine.a
NPCScript: /usr/local/lib/libLLVMObjCARCOpts.a
NPCScript: /usr/local/lib/libLLVMTransformUtils.a
NPCScript: /usr/local/lib/libLLVMCGData.a
NPCScript: /usr/local/lib/libLLVMBitWriter.a
NPCScript: /usr/local/lib/libLLVMAnalysis.a
NPCScript: /usr/local/lib/libLLVMProfileData.a
NPCScript: /usr/local/lib/libLLVMSymbolize.a
NPCScript: /usr/local/lib/libLLVMDebugInfoGSYM.a
NPCScript: /usr/local/lib/libLLVMDebugInfoDWARF.a
NPCScript: /usr/local/lib/libLLVMDebugInfoPDB.a
NPCScript: /usr/local/lib/libLLVMObject.a
NPCScript: /usr/local/lib/libLLVMIRReader.a
NPCScript: /usr/local/lib/libLLVMBitReader.a
NPCScript: /usr/local/lib/libLLVMAsmParser.a
NPCScript: /usr/local/lib/libLLVMCore.a
NPCScript: /usr/local/lib/libLLVMRemarks.a
NPCScript: /usr/local/lib/libLLVMBitstreamReader.a
NPCScript: /usr/local/lib/libLLVMTextAPI.a
NPCScript: /usr/local/lib/libLLVMDebugInfoCodeView.a
NPCScript: /usr/local/lib/libLLVMDebugInfoMSF.a
NPCScript: /usr/local/lib/libLLVMDebugInfoBTF.a
NPCScript: /usr/local/lib/libLLVMCodeGenTypes.a
NPCScript: /usr/local/lib/libLLVMMCParser.a
NPCScript: /usr/local/lib/libLLVMMCDisassembler.a
NPCScript: /usr/local/lib/libLLVMMC.a
NPCScript: /usr/local/lib/libLLVMBinaryFormat.a
NPCScript: /usr/local/lib/libLLVMTargetParser.a
NPCScript: /usr/local/lib/libLLVMSupport.a
NPCScript: /usr/local/lib/libLLVMDemangle.a
NPCScript: /usr/lib/libz.so
NPCScript: /usr/lib/libzstd.so
NPCScript: CMakeFiles/NPCScript.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/compilers/NPCScript/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable NPCScript"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NPCScript.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NPCScript.dir/build: NPCScript
.PHONY : CMakeFiles/NPCScript.dir/build

CMakeFiles/NPCScript.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NPCScript.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NPCScript.dir/clean

CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.cpp
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptBaseListener.h
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.cpp
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptBaseVisitor.h
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.cpp
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.h
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.interp
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptLexer.tokens
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptListener.cpp
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptListener.h
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptParser.cpp
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptParser.h
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.cpp
CMakeFiles/NPCScript.dir/depend: antlr4cpp_generated_src/NPCScript/NPCScriptVisitor.h
	cd /compilers/NPCScript/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /compilers/NPCScript /compilers/NPCScript /compilers/NPCScript/build /compilers/NPCScript/build /compilers/NPCScript/build/CMakeFiles/NPCScript.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/NPCScript.dir/depend

