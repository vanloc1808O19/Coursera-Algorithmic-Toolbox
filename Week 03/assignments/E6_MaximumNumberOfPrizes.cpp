/**
 *    author:    vanloc1808
 *    created:   20-10-2021   11:20:21
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

void solve() {
    long long n;
    cin >> n;

    long long k = 1;
    long long S = 0;

    vector<long long> elements;

    while(S < n) {
        S += k;
        
        elements.push_back(k);

        k++;
    }

    if (S == n) {
        cout << elements.size() << "\n";

        for (int i = 0; i < elements.size(); i++) {
            cout << elements[i] << " ";
        }
    } else {
        S -= (k - 1);

        elements[elements.size() - 2] += n - S;

        cout << elements.size() - 1 << "\n";

        for (int i = 0; i < elements.size() - 1; i++) {
            cout << elements[i] << " ";
        }
    }

    cout << "\n";
}

int main()
{
    fastio;
    
    solve();
    
    return 0;
}