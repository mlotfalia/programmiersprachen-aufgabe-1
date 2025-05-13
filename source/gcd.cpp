// 1.8) Implementing gcd with TDD
#include "gcd.hpp"
#include <cstdlib>   // for std::abs
#include <stdexcept> // for std::invalid_argument

int gcd(int a, int b)
{
    // 1) Precondition: both zero is undefined
    if (a == 0 && b == 0)
    {
        throw std::invalid_argument("gcd(0, 0) is undefined");
    }

    // 2) Work with absolute values
    a = std::abs(a);
    b = std::abs(b);

    // 3) Euclid’s algorithm
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}