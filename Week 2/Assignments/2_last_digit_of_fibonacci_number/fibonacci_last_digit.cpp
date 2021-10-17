#include <iostream>
#include <vector>

long long fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    std::vector<long long> f(n + 1);
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}

long long get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    std::vector<long long> f(n + 1);
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] % 10 + f[i - 2] % 10) % 10;
    }

    return f[n] % 10;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
