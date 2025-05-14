# // 1.8) Implementing gcd with TDD

# tests/CMakeLists.txt

# point the test target at your catch include folder:
add_executable(tests_all
  test_main.cpp 
  tests_gcd.cpp
  tests_math.cpp
)
target_include_directories(tests_all PRIVATE
${CMAKE_SOURCE_DIR}/external/catch2
${CMAKE_SOURCE_DIR}/source
)

target_link_libraries(tests_all
PRIVATE
  core     
  Catch2   # your library
)
enable_testing() 

add_test(NAME all_tests COMMAND tests_all)
