#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

vector<int> dp(int n) {
    vector<int> arr(n + 1);
    vector<int> ansVec;

    int add1 = INT_MAX, mul2 = INT_MAX, mul3 = INT_MAX;

    for (int i = 2; i <= n; i++) {
        add1 = INT_MAX;
        mul2 = INT_MAX;
        mul3 = INT_MAX;

        if (i - 1 >= 0) {
            add1 = arr[i - 1] + 1;
        }

        if (i % 2 == 0 && i / 2 >= 0) {
            mul2 = arr[i / 2] + 1;
        }

        if (i % 3 == 0 && i / 3 >= 0) {
            mul3 = arr[i / 3] + 1;
        }

        arr[i] = min(add1, min(mul2, mul3));
    }

    auto ans = arr[n];

    while (n > 1) {
        if (n % 3 == 0 && arr[n / 3] + 1 == arr[n]) {
            ansVec.push_back(n);
            n /= 3;
        } else if (n % 2 == 0 && arr[n / 2] + 1 == arr[n]) {
            ansVec.push_back(n);
            n /= 2;
        } else if (arr[n - 1] + 1 == arr[n]) {
            ansVec.push_back(n);
            n -= 1;
        }
    }

    ansVec.push_back(1);

    reverse(ansVec.begin(), ansVec.end());

    return ansVec;
}

int main() {
    int n;
    cin >> n;

    auto ans = dp(n);
    cout << ans.size() - 1 << "\n";

    for (auto a : ans) {
        cout << a << " ";
    }

    cout << "\n";
}