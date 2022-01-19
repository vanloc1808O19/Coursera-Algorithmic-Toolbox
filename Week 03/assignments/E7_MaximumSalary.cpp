/**
 *    author:    vanloc1808
 *    created:   20-10-2021   11:30:38
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

bool isGreaterOrEqual(int lhs, int rhs) {
    string lstring = to_string(lhs);
    string rstring = to_string(rhs);

    string firstNumber = lstring + rstring;
    string secondNumber = rstring + lstring;

    return (firstNumber >= secondNumber);
}

string solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    string ans = "";

    while(a.size() > 0) {
        int maxDigit = 0;
        int maxIndex = -1;

        for (int i = 0; i < a.size(); i++) {
            if (maxIndex == -1 || isGreaterOrEqual(a[i], maxDigit)) {
                maxDigit = a[i];
                maxIndex = i;
            }
        }

        ans += to_string(maxDigit);

        a.erase(a.begin() + maxIndex);
    }

    return ans;

}

int main()
{
    fastio;
    
    cout << solve() << "\n";
    
    return 0;
}