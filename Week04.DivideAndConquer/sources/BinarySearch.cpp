#include <iostream>
#include <vector>

using namespace std;

//Condition: the array is sorted (in this file we assume that the array is sorted in monotomically non-decreasing order)

//Complexity: O(log n)
int binarySearch(int a[], int low, int high, int key) {
    if (low > high) {
        return low - 1;
    }

    int mid = low + (high - low) / 2;

    if (a[mid] == key) {
        return mid;
    } else if (a[mid] > key) {
        return binarySearch(a, low, mid - 1, key);
    } else {
        return binarySearch(a, mid + 1, high, key);
    }
}

//Complexity: O(log n)
int iterativeBinarySearch(int a[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == key) {
            return mid;
        } else if (a[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low - 1;
}

int main() {
    int a[] = {3, 5, 8, 10, 12, 15, 18, 20, 20, 50, 60};

    int low = 0, high = sizeof(a) / sizeof(a[0]) - 1;

    cout << binarySearch(a, low, high, 20) << "\n";
    cout << binarySearch(a, low, high, 70) << "\n";
}