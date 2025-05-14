// 1_9)-1_10)-1_11)
#pragma once
float fract(float x);
double fract(double x);
double volume_cylinder(double r, double h);
double surface_cylinder(double r, double h);
bool is_prime(int n);
#include "math.hpp"
#include <cmath>
#include <numbers>

float fract(float x)
{
    return x - std::floor(x);
}

double fract(double x)
{
    return x - std::floor(x);
}

double volume_cylinder(double r, double h)
{
    return std::numbers ::pi * r * r * h;
}

double surface_cylinder(double r, double h)
{
    return 2 * std::numbers::pi * r * (r + h);
}

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; 1LL * i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
