#include <iostream>
#include <vector>

using namespace std;

int dpChange(long long money, vector<long long>& coins) {
    vector<long long> dp(money + 1, 0);
    for (long long coin : coins) {
        for (long long i = coin; i <= money; i++) {
            dp[i] += dp[i - coin];
        }
    }
    return dp[money];
}