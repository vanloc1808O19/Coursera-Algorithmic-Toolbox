/**
 *    author:    vanloc1808
 *    created:   19-10-2021   17:46:09
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

pair<vector<double>, double> solve(double capacity, vector<double> weights, vector<double> values) {
    vector<double> a(weights.size(), 0);

    double totalValue = 0;
    int n = weights.size();

    for (int i = 1; i <= n; i++) {
        if (capacity == 0) {
            return make_pair(a, totalValue);
        }

        double maxPerUnit = INT_MIN;
        int maxIndex = -1;

        for (int i = 0; i < n; i++) {
            if (weights[i] > 0 && values[i] / weights[i] > maxPerUnit) {
                maxPerUnit = values[i] / weights[i];
                maxIndex = i;
            }
        }

        double amount = min(weights[maxIndex], capacity);
        
        totalValue += amount * maxPerUnit;

        weights[maxIndex] -= amount;

        a[maxIndex] += amount;

        capacity -= amount;
    }

    return make_pair(a, totalValue);
}

int main()
{
    fastio;
    
    int n;
    cin >> n;
    
    double capacity;
    cin >> capacity;

    vector<double> values(n);
    vector<double> weights(n);

    for (int i = 0; i < n; i++) {
        cin >> values[i] >> weights[i];
    }

    pair<vector<double>, double> ans = solve(capacity, weights, values);

    cout << fixed << setprecision(3) << ans.second << "\n";
    
    return 0;
}