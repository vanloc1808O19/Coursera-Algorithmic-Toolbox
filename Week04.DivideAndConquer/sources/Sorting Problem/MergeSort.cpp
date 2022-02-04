#include <iostream>

using namespace std;

//https://www.geeksforgeeks.org/merge-sort/
void mergeSort(int* a, int n) {
    if (n <= 1) {
        return;
    }

    int mid = n / 2;
    int* left = new int[mid];
    int* right = new int[n - mid];

    for (int i = 0; i < mid; i++) {
        left[i] = a[i];
    }

    for (int i = mid; i < n; i++) {
        right[i - mid] = a[i];
    }

    mergeSort(left, mid);
    mergeSort(right, n - mid);

    int i = 0, j = 0, k = 0;

    while (i < mid && j < n - mid) {
        if (left[i] < right[j]) {
            a[k++] = left[i++];
        } else {
            a[k++] = right[j++];
        }
    }

    while (i < mid) {
        a[k++] = left[i++];
    }

    while (j < n - mid) {
        a[k++] = right[j++];
    }

    delete[] left;
    delete[] right;
}
