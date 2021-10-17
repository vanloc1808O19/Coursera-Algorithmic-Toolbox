#include <iostream>
#include <vector>

long long get_fibonacci_huge_naive(long long n, long long m) {
     if (n <= 1)
        return n;

    //std::vector<long long> f(n + 1);

    long long prev = 0;
    long long cur = 1;
    long long ans = 1;
    for (int i = 2; i <= n; i++) {
        ans = ((prev % m) + (cur % m)) % m;
        prev = cur;
        cur = ans;
        //std::cout << ans << '\n';
    }

    return ans % m;
}

long long getPisanoPeriod(long long m) {
    long long a = 0, b = 1, c = 1;

    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) {
            return i + 1;
        }
    }
}

long long getFibonacciHuge(long long n, long long m) {
    n %= getPisanoPeriod(m);

    if (n <= 1) {
        return n;
    }

    long long prev = 0;
    long long cur = 1;
    long long ans = 1;

    for (int i = 2; i <= n; i++) {
        ans = (prev % m + cur % m) % m;
        prev = cur;
        cur = ans;
    }

    return ans % m;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    //std::cout << get_fibonacci_huge_naive(n, m) << '\n';
    std::cout << getFibonacciHuge(n, m);
}
