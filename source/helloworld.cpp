#include <array>
#include <iostream>
#include <cstdlib>
#include <ctime>
// ... (insert the pythagorean_1000() definition here) ...
// returns true if it found and printed the triple
bool pythagorean_1000()
{

    for (int a = 1; a <= 998; ++a)
    {
        // b must be > a, and a + b + c = 1000 => b <= 999 - a
        for (int b = a + 1; b <= 999 - a; ++b)
        {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c)
            {
                std::cout << "Found: a=" << a
                          << ", b=" << b
                          << ", c=" << c << "\n";
                return true;
            }
        }
    }
    return false;
}

// 1.6.1) return true for Heads, false for Tails

bool flip_a_coin()
{
    return std::rand() % 2 == 0; // true = Heads, false = Tails
}

int main()
{
    // 1.2) printing in cpp
    std::cout << "Hello World! I’m getting back into C++ after 12 years.\n";
    // 1.3) run your LCM code
    long long result = 1;
    for (int i = 1; i <= 20; ++i)
    {
        long long a = result, b = i;
        while (b != 0)
        {
            long long tmp = b;
            b = a % b;
            a = tmp;
        }
        long long gcd = a;
        result = (result / gcd) * i;
    }
    std::cout << "LCM 1..20 = " << result << "\n";

    // 1.4) now call the Pythagorean finder
    if (!pythagorean_1000())
    {
        std::cout << "No triple found.\n";
    }
    // 1.5) std::array and Random Numbers
    std::srand(std::time(nullptr));
    std::array<int, 20> arr;
    for (auto &x : arr)
        x = std::rand();
    for (auto x : arr)
        std::cout << x << " ";
    // Find max
    int maxv = arr[0];
    for (auto x : arr)
        if (x > maxv)
            maxv = x;
    std::cout << "\nMax: " << maxv;
    // Compute average
    long long sum = 0;
    for (auto x : arr)
        sum += x;
    std::cout << "\nAvg: " << double(sum) / arr.size() << "\n";

    // 1.6) Coin Flip (flip_a_coin)

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    std::cout << "How many flips? ";
    int n;
    std::cin >> n;

    int heads = 0, tails = 0;
    for (int i = 0; i < n; ++i)
    {
        if (flip_a_coin())
            ++heads;
        else
            ++tails;
    }

    std::cout << "#Heads Flips: " << heads << "\n"
              << "#Tails Flips: " << tails << "\n";

    return 0;
}
