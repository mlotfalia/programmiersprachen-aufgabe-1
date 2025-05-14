cmake_minimum_required(VERSION 3.14)
project(ProgrammiersprachenAufgabe1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ----------------------------------------------------------------------------
# Hello World and flip_coin
add_executable(helloworld
  source/helloworld.cpp
)

add_executable(flip_coin
  source/flip_coin.cpp
)

# ----------------------------------------------------------------------------
# 1.8) gcd library
add_library(gcd STATIC
  source/gcd.cpp
)
target_include_directories(gcd
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/source
)

# — Catch2 (single-header) —
# point CMake at your external/catch2 folder
include_directories(${CMAKE_SOURCE_DIR}/external/catch2)
# ----------------------------------------------------------------------------

enable_testing()

# Now add our subdirectories
add_subdirectory(tests)
