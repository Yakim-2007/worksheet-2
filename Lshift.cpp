//Left Shift (Remove First Element): Write a function that shifts all elements to the left and removes the first element.//

#include <iostream>
using namespace std;

void leftShift(int array[], int &size);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;

    // Call the function to left shift and remove the first element
    leftShift(array, size);

    // Print the updated array
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

void leftShift(int array[], int &size) {
    if (size <= 0) {
        cout << "Array is empty. Cannot perform left shift." << endl;
        return;
    }

    // Shift all elements to the left
    for (int i = 0; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    // Reduce the size of the array by 1
    size--;
}