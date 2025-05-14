#include "catch.hpp"
#include "math.hpp"
#include <numbers>

TEST_CASE("fract", "[fract]")
{
    REQUIRE(fract(7.24f) == Approx(0.24f));
    REQUIRE(fract(-2.75f) == Approx(0.25f));
    REQUIRE(fract(0.0f) == Approx(0.0f));
}

TEST_CASE("cylinder", "[cylinder]")
{
    double r = 2.0, h = 5.0;
    REQUIRE(volume_cylinder(r, h) == Approx(std::numbers::pi * r * r * h));
    REQUIRE(surface_cylinder(r, h) == Approx(2 * std::numbers::pi * r * (r + h)));
}

TEST_CASE("is_prime", "[prime]")
{
    REQUIRE(!is_prime(0));
    REQUIRE(!is_prime(1));
    REQUIRE(is_prime(2));
    REQUIRE(is_prime(13));
    REQUIRE(!is_prime(4));
    REQUIRE(!is_prime(-7));
}
