#include <iostream>
#include <algorithm>

using namespace std;

//https://github.com/HaiDuc0147/sortingAlgorithm/blob/main/reportSort/Sort.cpp
void quickSort(int* a, int left, int right) {
    int i = left, j = right;
    int pivot = a[(left + right) / 2];
    while (i <= j) {
        while (a[i] < pivot) {
            i++;
        }
        while (a[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    if (left < j) {
        quickSort(a, left, j);
    }
    if (i < right) {
        quickSort(a, i, right);
    }
}