// 1.8) Implementing gcd with TDD
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "gcd.hpp" // <-- pulls in the real declaration

TEST_CASE("describe_gcd", "[gcd]")
{
    REQUIRE(gcd(2, 4) == 2);
    REQUIRE(gcd(9, 6) == 3);
    REQUIRE(gcd(3, 7) == 1);

    // bonus cases
    REQUIRE(gcd(0, 5) == 5);
    REQUIRE(gcd(-8, 12) == 4);
    REQUIRE_THROWS_AS(gcd(0, 0), std::invalid_argument);
}
