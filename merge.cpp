#include <iostream>
using namespace std;

void merged(int arr1[], int arr2[], int size1, int size2, int merge[]);

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int size1 = 5;
    int size2 = 5;
    int mergeSize = size1 + size2;  // Fixed incorrect declaration
    int merge[mergeSize];  // Correct array declaration

    merged(arr1, arr2, size1, size2, merge);
    cout << "Merged array: ";
    for (int i = 0; i < mergeSize; i++) {
        cout << merge[i] << " ";
    }
    return 0;
}

void merged(int arr1[], int arr2[], int size1, int size2, int merge[]) {
    int i = 0; // index for arr1
    int j = 0; // index for arr2
    int m = 0; // index for merge

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merge[m++] = arr1[i++];
        } else {
            merge[m++] = arr2[j++];
        }
    }

    while (i < size1) {
        merge[m++] = arr1[i++];
    }

    while (j < size2) {
        merge[m++] = arr2[j++];
    }
}
