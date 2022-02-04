#include <iostream>
#include <algorithm>

using namespace std;

//https://nguyenvanhieu.vn/thuat-toan-sap-xep-selection-sort/
void selectionSort(int* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(a[i], a[minIndex]);
        }
    }
}