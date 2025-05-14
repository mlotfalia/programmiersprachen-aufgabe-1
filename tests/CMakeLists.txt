# tests/CMakeLists.txt


add_executable(tests
    test_main.cpp
    tests_gcd.cpp
    tests_math.cpp

)

target_include_directories(tests PRIVATE
  ${CMAKE_SOURCE_DIR}/external/catch2   # <catch.hpp>
  ${CMAKE_SOURCE_DIR}/source
)
target_link_libraries(tests PRIVATE core)
add_test(NAME gcd_zero      COMMAND tests "[describe_gcd] and 0,0")
add_test(NAME gcd_positive  COMMAND tests "[describe_gcd] and 6,9")


