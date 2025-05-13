# 1.8) Implementing gcd with TDD

# source/CMakeLists.txt

# Create a static library target named 'gcd' from gcd.cpp
add_library(gcd STATIC
    gcd.cpp
)

# Expose the header search path so others can do #include "gcd.hpp"
target_include_directories(gcd
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
