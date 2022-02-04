#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int key) {
    if (key < arr[0] || key > arr[arr.size() - 1]) {
        return -1;
    }

    int start = lower_bound(arr.begin(), arr.end(), key) - arr.begin();
    if (arr[start] == key) {
        return start;
    } else {
        return -1;
    }

}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cin >> k;
    vector<int> b(k);
    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < k; i++) {
        cout << binarySearch(a, b[i]) << " ";
    }
    cout << "\n";

    return 0;
}