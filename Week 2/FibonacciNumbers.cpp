/**
 *    author:    vanloc1808
 *    created:   07-10-2021   06:21:17
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
const int N_MAX = 1000;

double F[N_MAX + 1];

void fibList() {
    F[0] = 0;
    F[1] = 1;

    for (int i = 2; i <= N_MAX; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
}

int solve() {
    return 0;
}

int main()
{
    fastio;
    
    fibList();

    for (int i = 0; i <= N_MAX; i++) {
        cout << F[i] << "\n";
    }
    
    return 0;
}