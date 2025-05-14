// 1.8) Implementing gcd with TDD
// source/gcd.cpp
#include "gcd.hpp"
#include <cstdlib>
#include <stdexcept>
int gcd(int a, int b)
{
    if (a == 0 && b == 0)
        throw std::invalid_argument("gcd(0,0) is undefined");
    if (a == 0)
        return std::abs(b);
    if (b == 0)
        return std::abs(a);

    a = std::abs(a);
    b = std::abs(b);

    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
