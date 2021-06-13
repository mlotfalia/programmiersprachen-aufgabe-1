cmake_minimum_required(VERSION 3.14)
project(Aufgabenblatt1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang") OR ("${CMAKE_CXX_COMPILER_ID}"
STREQUAL "GNU") OR (("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel") AND UNIX))
  set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libc++")
endif()

set(CATCH_DIRECTORY catch2)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/external/${CATCH_DIRECTORY})

if(MSVC)
  add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif(MSVC)

#check for CMakeLists.txt files in subdirectory source (where your applications are)
add_subdirectory(source)
