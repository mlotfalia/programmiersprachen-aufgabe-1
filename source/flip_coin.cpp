#include "coin.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
// 1.6) Coin Flip (flip_a_coin)
Coin flip_a_coin()
{
    return (std::rand() % 2 == 0)
               ? Coin::Heads
               : Coin::Tails;
}

int main()
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    std::cout << "How many flips? ";
    int n;
    std::cin >> n;

    int heads = 0, tails = 0;
    for (int i = 0; i < n; ++i)
    {
        if (flip_a_coin() == Coin::Heads)
            ++heads;
        else
            ++tails;
    }

    std::cout << "#Heads Flips: " << heads << "\n"
              << "#Tails Flips: " << tails << "\n";
    return 0;
}
