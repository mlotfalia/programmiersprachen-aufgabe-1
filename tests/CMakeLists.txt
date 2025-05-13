# // 1.8) Implementing gcd with TDD

# tests/CMakeLists.txt

add_executable(test_gcd
  test_gcd.cpp
)

target_link_libraries(test_gcd
  PRIVATE
    gcd
    Catch2::Catch2WithMain
)

add_test(NAME gcd_tests COMMAND test_gcd)
