#include <iostream>
#include <vector>
using std::vector;

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

long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long toSum = fibonacciSumLastDigit(to);
    long long fromSum = fibonacciSumLastDigit(from - 1);

    return (((toSum - fromSum) % 10) + 10) % 10;
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_naive(from, to) << '\n';
}
