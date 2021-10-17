/**
 *    author:    vanloc1808
 *    created:   05-10-2021   06:22:50
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

long long maxPairwiseProduct(vll& a) {
    long long res = 0;

    int size = a.size();

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] * a[j] > res) {
                res = a[i] * a[j];
            }
        }
    }

    return res;
}

//in this problem, the max value and the second max value must be DIFFERENT,
//which means that in the array
//1 2 8 9 9 7,
//the max value is 9, and the second max value is 8.
long long maxPairwiseProductFast(vll& a) {
    int size = a.size();

    int maxIndex = -1;
    for (int i = 0; i < size; i++) {
        if ((maxIndex == -1) || (a[i] > a[maxIndex])) {
            maxIndex = i;
        }
    }

    int secondMaxIndex = -1;
    for (int i = 0; i < size; i++) {
        if ((a[i] != a[maxIndex]) && ((secondMaxIndex == -1) || a[i] > a[secondMaxIndex])) {
            secondMaxIndex = i;
        }
    }

    return a[maxIndex] * a[secondMaxIndex];
}

int main()
{
    fastio;
    
    while(true) {
        int n = rand() % 10 + 2; //random the size of the vector, but it must be at least 2
        cout << n << "\n"; //output the size

        vll a;
        for (int i = 0; i < n; i++) {
            a.push_back(rand() % 100000); //random the elements of the vector
        }

        //output the vector
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";

        long long res1 = maxPairwiseProduct(a);
        long long res2 = maxPairwiseProductFast(a);

        if (res1 != res2) {
            cout << "Wrong answer: " << res1 << " " << res2 << "\n";
            break;
        } else {
            cout << "OK!\n";
        }
    }
    
    return 0;
}