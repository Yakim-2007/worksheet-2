// Split an Array: Write a function that splits an array into two halves.
#include <iostream>
using namespace std;

void splitArray(int arr[], int midpoint, int size, int size1, int size2, int arr1[], int arr2[]);
   

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    int midpoint = size / 2; // Find midpoint

    int arr1[midpoint]; // First half
    int arr2[size - midpoint]; // Second half

    splitArray(arr, midpoint, size, midpoint, size - midpoint, arr1, arr2);

    // Print first half
    cout << "First Half: ";
    for (int i = 0; i < midpoint; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Print second half
    cout << "Second Half: ";
    for (int i = 0; i < size - midpoint; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}

void splitArray(int arr[], int midpoint, int size, int size1, int size2, int arr1[], int arr2[]) {
    // Copy elements into arr1 (first half)
    for (int i = 0; i < midpoint; i++) {
        arr1[i] = arr[i];
    }

    // Copy elements into arr2 (second half)
    for (int i = 0; i < size - midpoint; i++) {
        arr2[i] = arr[midpoint + i];
    }
}