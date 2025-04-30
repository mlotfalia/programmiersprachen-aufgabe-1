#include <iostream>

// ... (insert the pythagorean_1000() definition here) ...
// returns true if it found and printed the triple
bool pythagorean_1000() {
  for (int a = 1; a <= 998; ++a) {
      // b must be > a, and a + b + c = 1000 => b <= 999 - a
      for (int b = a + 1; b <= 999 - a; ++b) {
          int c = 1000 - a - b;
          if (a*a + b*b == c*c) {
              std::cout << "Found: a=" << a
                        << ", b=" << b
                        << ", c=" << c << "\n";
              return true;
          }
      }
  }
  return false;
}
int main() {
    // 1) run your LCM code
    long long result = 1;
    for (int i = 1; i <= 20; ++i) {
        long long a = result, b = i;
        while (b != 0) {
            long long tmp = b;
            b = a % b;
            a = tmp;
        }
        long long gcd = a;
        result = (result/gcd) * i;
    }
    std::cout << "LCM 1..20 = " << result << "\n";

    // 2) now call the Pythagorean finder
    if (!pythagorean_1000()) {
        std::cout << "No triple found.\n";
    }

    return 0;
}
