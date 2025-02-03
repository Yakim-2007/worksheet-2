//Replace Element: Write a function that replaces all occurrences of a given value with another value.
#include <iostream>
using namespace std;

void replace (int arr[], int size, int newVal, int oldVal);

int main () {
    int arr[] = {1, 5, 5, 5, 5, 6, 7, 8, 9};
    int size = 9;
    int newVal = 10;
    int oldVal = 5;
    replace(arr, size, newVal, oldVal);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
void replace (int arr[], int size, int newVal, int oldVal) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == oldVal) {
            arr[i] = newVal;
        }
    }
}