# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.23
cmake_policy(SET CMP0009 NEW)

# MY_HEADER_FILES at include/CMakeLists.txt:2 (file)
file(GLOB NEW_GLOB LIST_DIRECTORIES false RELATIVE "C:/Users/kashi/Documents/OOP2/ex1/oop2_ex01-basefiles/oop2_ex01-basefiles/include" "C:/Users/kashi/Documents/OOP2/ex1/oop2_ex01-basefiles/oop2_ex01-basefiles/include/*.h")
set(OLD_GLOB
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "C:/Users/kashi/Documents/OOP2/ex1/oop2_ex01-basefiles/oop2_ex01-basefiles/out/build/x64-Debug/CMakeFiles/cmake.verify_globs")
endif()

# MY_SOURCE_FILES at src/CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false RELATIVE "C:/Users/kashi/Documents/OOP2/ex1/oop2_ex01-basefiles/oop2_ex01-basefiles/src" "C:/Users/kashi/Documents/OOP2/ex1/oop2_ex01-basefiles/oop2_ex01-basefiles/src/*.cpp")
set(OLD_GLOB
  "main.cpp"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "C:/Users/kashi/Documents/OOP2/ex1/oop2_ex01-basefiles/oop2_ex01-basefiles/out/build/x64-Debug/CMakeFiles/cmake.verify_globs")
endif()