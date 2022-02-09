#include <iostream>
#include <vector>

using namespace std;

vector<int> coins = {1, 3, 4};

const int INF = 100000;

vector<bool> ready(INF, false);
vector<int> dp(INF, INF);

int solve(int money) {
    if (money < 0) {
        return INF;
    }

    if (money == 0) {
        return 0;
    }

    if (ready[money] == true) {
        return dp[money];
    }

    int best = INF;

    for (auto c : coins) {
        best = min(best, solve(money - c) + 1);
    }

    dp[money] = best;
    ready[money] = true;

    return best;
}

int main() {
    int money;
    cin >> money;

    cout << solve(money) << "\n";
}