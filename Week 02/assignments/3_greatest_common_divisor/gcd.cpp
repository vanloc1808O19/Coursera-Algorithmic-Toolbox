#include <iostream>
#include <cmath>

int gcd_naive(int a, int b) {
  a = abs(a);
  b = abs(b);
  if (a < b) {
    int temp = a;
    a = b;
    b = temp;
  }

  if (b == 0) {
    return a;
  }

  if (a % b == 0) {
    return b;
  } 

  return gcd_naive(b, a % b);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_naive(a, b) << std::endl;
  return 0;
}
