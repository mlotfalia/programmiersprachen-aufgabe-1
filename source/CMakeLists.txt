# source/CMakeLists.txt

# 1) Build the gcd static library from gcd.cpp
add_library(core STATIC gcd.cpp math.cpp)
# Expose the include directory for any target that links to this library
target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# 2) Build the Hello World executable
add_executable(helloworld
  helloworld.cpp
)

# Tell it where to find headers (i.e. coin.hpp, gcd.hpp, etc)
target_link_directories(helloworld
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
)

# 3) Build the coin-flip executable
add_executable(flip_coin
  flip_coin.cpp
)

target_link_directories(flip_coin
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
)
