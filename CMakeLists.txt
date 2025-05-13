cmake_minimum_required(VERSION 3.10)
project(programmiersprachen_aufgabe_1)

# Hello World program
add_executable(helloworld
  source/helloworld.cpp
)

# Coin-flip program
add_executable(flip_coin
  source/flip_coin.cpp    # ← this path must exactly match your file
)
# 1.8) Implementing gcd with TDD
cmake_minimum_required(VERSION 3.14)
project(ProgrammiersprachenAufgabe1 LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0
)
FetchContent_MakeAvailable(Catch2)

enable_testing()

add_subdirectory(source)
add_subdirectory(tests)
