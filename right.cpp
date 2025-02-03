//Rotate Right: Modify the previous function to rotate the array one position to the right.
#include <iostream>
using namespace std;

void rotateRight(int array[], int size);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;

    // Call the function to rotate the array to the right
    rotateRight(array, size);

    // Print the rotated array
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

void rotateRight(int array[], int size) {
    int right = array[size - 1];  // Save the last element
    for (int i = size - 1; i > 0; i--) {
        array[i] = array[i - 1];  // Shift elements to the right
    }
    array[0] = right;  // Place the last element at the beginning
}