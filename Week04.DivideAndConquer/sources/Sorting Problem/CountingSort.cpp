#include <iostream>

using namespace std;

void countingSort(int* a, int n) {
    int* c = new int[n];
    for (int i = 0; i < n; i++) {
        c[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        c[a[i]]++;
    }

    for (int i = 1; i < n; i++) {
        c[i] += c[i - 1];
    }

    int* b = new int[n];
    for (int i = n - 1; i >= 0; i--) {
        b[c[a[i]] - 1] = a[i];
        c[a[i]]--;
    }

    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }

    delete[] c;
    delete[] b;
}