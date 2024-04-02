cmake_minimum_required(VERSION 3.20)
project(Aufgabenblatt1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CATCH_DIRECTORY catch2)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/external/${CATCH_DIRECTORY})

#check for CMakeLists.txt files in subdirectory source (where your applications are)
add_subdirectory(source)
