#include <iostream>

int main()
{
  long long result = 1;

  for (int i = 1; i <= 20; ++i) {
      // Inline GCD computation using the Euclidean algorithm:
      long long a = result;
      long long b = i;
      while (b != 0) {
          long long temp = b;
          b = a % b;
          a = temp;
      }
      long long gcd = a;  // when b==0, a is the GCD

      // Inline LCM update:
      // lcm(result, i) = (result / gcd) * i
      result = (result / gcd) * i;
  }

  std::cout << "Smallest number divisible by 1..20 is "
            << result << "\n";

  return 0;
}
