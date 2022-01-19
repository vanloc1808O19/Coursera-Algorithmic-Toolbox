/**
 *    author:    vanloc1808
 *    created:   19-10-2021   15:53:18
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

// PROBLEM:
// Many children come to a celebration. Organize them into the minimum possible number of groups
// such that the age of any children in a group differ by at most one year.

int groupingChildren(vector<double> x) {
    sort(all(x));

    int groups = 0, i = 0;
    int n = x.size();

    while(i < n) {
        double l = x[i];
        double r = x[i] + 1;

        groups++;

        i++;

        while(i < n && x[i] <= r) {
            i++;
        }
    }
    

    return groups;
}

int main()
{
    fastio;
    
    
    
    return 0;
}