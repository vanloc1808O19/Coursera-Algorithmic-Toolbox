/**
 *    author:    vanloc1808
 *    created:   19-10-2021   16:45:55
**/

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef unsigned int ui;
typedef long long ll;
typedef float fl;
typedef double db;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fillArray(a, n, t) for (int i = 0; i < n; i++) {a[i] = t}
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front

const long long INF = 2e18;
const long long MOD = 1000000007;
const double PI = 3.14159;
const double EPSILON = 1e-6;

int numberOfCoins(vector<int> coins, int x) {
    if (x < 0) {
        return INT_MAX - 1;
    }

    if (x == 0) {
        return 0;
    }

    int ans = INT_MAX;

    for (auto c : coins) {
        ans = min(ans, numberOfCoins(coins, x - c) + 1);
    }

    return ans;
}

int solve() {
    int m;
    cin >> m;

    int ans = 0;

    vector<int> coins;
    coins.push_back(1);
    coins.push_back(5);
    coins.push_back(10);

    for (int i = coins.size() - 1; i >= 0; i--) {
        ans += m / coins[i];
        m %= coins[i];
    }

    return ans;

}

int main()
{
    fastio;
    
    cout << solve() << "\n";
    
    return 0;
}