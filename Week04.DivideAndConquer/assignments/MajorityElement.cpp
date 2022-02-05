#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isMajority(vector<int> a, int n) {
    sort(a.begin(), a.end());

    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            if (cnt > n / 2) {
                return true;
            } else {
                cnt = 1;
            }
        } else {
            cnt++;
        }
    }

    if (cnt > n / 2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (isMajority(a, n)) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }

    return 0;
}