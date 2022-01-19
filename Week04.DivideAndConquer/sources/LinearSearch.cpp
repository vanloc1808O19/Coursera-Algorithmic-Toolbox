#include <iostream>
#include <vector>

using namespace std;

//Complexity: O(n)
int linearSearch(int a[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }

    if (a[low] == key) {
        return low;
    }

    return linearSearch(a, low + 1, high, key);
}

//Complexity: O(n)
int iterativeLinearSearch(int a[], int low, int high, int key) {
    for (int i = low; i <= high; i++) {
        if (a[i] == key) {
            return i;
        }
    }

    return -1;
}