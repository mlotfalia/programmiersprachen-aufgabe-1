// 1.8) Implementing gcd with TDD
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "../source/gcd.hpp"

TEST_CASE("GCD special cases")
{
    REQUIRE_THROWS_AS(gcd(0, 0), std::invalid_argument);

    SECTION("gcd(0, n) returns |n|")
    {
        REQUIRE(gcd(0, 5) == 5);
        REQUIRE(gcd(0, -7) == 7);
    }
    SECTION("gcd(n, 0) returns |n|")
    {
        REQUIRE(gcd(9, 0) == 9);
        REQUIRE(gcd(-11, 0) == 11);
    }
}

TEST_CASE("GCD boundary and random values")
{
    REQUIRE(gcd(1, -1) == 1);
    REQUIRE(gcd(270, 192) == 6);
    REQUIRE(gcd(53, 29) == 1);
    REQUIRE(gcd(7513812, 123456) == 12);
}
