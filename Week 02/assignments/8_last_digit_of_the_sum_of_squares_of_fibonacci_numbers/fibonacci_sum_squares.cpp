#include <iostream>
#include <vector>

int fibonacci_sum_squares_naive(long long n) {
    long long prev = 0;
    long long cur = 1;
    long long ans = 1;
    long long sum = 1;
    n = n % 60;
    if (n <= 1)
        return n;

    for (int i = 2; i <= n; i++) {
        ans = ((prev % 10) + (cur % 10)) % 10;
        prev = cur;
        cur = ans;
        sum = (sum + ((ans % 10) * (ans % 10)) % 10) % 10;
        //std::cout << ans << '\n';
    }

    return sum;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_squares_naive(n);
}
