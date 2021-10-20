/**
 *    author:    vanloc1808
 *    created:   20-10-2021   10:40:41
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
    int n;
    cin >> n;

    vector<pair<long long, long long>> segment(n);

    for (int i = 0; i < n; i++) {
        cin >> segment[i].second >> segment[i].first;
    }

    sort(all(segment));

    int numCollect = 0, curCollect = 0;

    vector<long long> collectOrder;

    while(curCollect < n) {
        long long r = segment[curCollect].first;
        long long l = segment[curCollect].second;

        numCollect++;

        curCollect++;

        collectOrder.push_back(r);

        while(curCollect < n && segment[curCollect].first >= r && segment[curCollect].second <= r) {
            curCollect++;
        }
    }

    cout << collectOrder.size() << "\n";
    for (int i = 0; i < collectOrder.size(); i++) {
        cout << collectOrder[i] << " ";
    }
    cout << "\n";
}

int main()
{
    fastio;
    
    solve();
    
    return 0;
}