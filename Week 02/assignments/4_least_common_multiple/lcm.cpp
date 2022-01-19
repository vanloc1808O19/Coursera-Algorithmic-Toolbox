#include <iostream>

long long gcd_naive(long long a, long long b) {
  a = abs(a);
  b = abs(b);
  if (a < b) {
    int temp = a;
    a = b;
    b = temp;
  }

  if (b == 0) {
    return 1LL * a;
  }

  if (a % b == 0) {
    return 1LL * b;
  } 

  return gcd_naive(b, a % b);
}

long long lcm_naive(long long a, long long b) {
  return (a * b) / gcd_naive(a, b);
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
