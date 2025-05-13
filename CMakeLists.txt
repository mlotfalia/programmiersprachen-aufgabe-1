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
