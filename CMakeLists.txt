#CMake root level
cmake_minimum_required(VERSION 3.20)
project(ProgrammiersprachenAufgabe1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# — Catch2 (single-header) —
add_library(Catch2 INTERFACE)
# point CMake at your external/catch2 folder
target_include_directories(Catch2
    INTERFACE ${CMAKE_SOURCE_DIR}/external/catch2   # <catch.hpp>
)

enable_testing()
# ----------------------------------------------------------------------------
add_subdirectory(source) # main libraries and binaries 

# Now add our subdirectories
add_subdirectory(tests)
