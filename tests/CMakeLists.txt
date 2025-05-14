# // 1.8) Implementing gcd with TDD

# tests/CMakeLists.txt

# point the test target at your catch include folder:
add_executable(tests_gcd
  tests_gcd.cpp
)
target_include_directories(tests_gcd
  PRIVATE ${CMAKE_SOURCE_DIR}/external/catch2
)

target_link_libraries(tests_gcd
  PRIVATE gcd           # your library
)

target_compile_features(tests_gcd
  PRIVATE cxx_std_17
)

add_test(NAME gcd_tests COMMAND tests_gcd)
