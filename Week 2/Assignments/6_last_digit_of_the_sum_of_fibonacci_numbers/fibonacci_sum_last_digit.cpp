#include <iostream>
#include <vector>


long long fibonacciSumLastDigit(long long n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    n = (n + 2) % 60;

    std::vector<long long> f(n + 1);
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] + f[i - 2]) % 10;
    }

    if (f[n] == 0) {
        return 9;
    } 

    return f[n] % 10 - 1;
}

int main() {
     long long n = 0;
     std::cin >> n;

    // for (int i = 0; i <= 100; i++) {
    //     std::cout << fibonacciSumLastDigit(i) << "\n";
    // }
    
    std::cout << fibonacciSumLastDigit(n) << "\n";

    return 0;
}
