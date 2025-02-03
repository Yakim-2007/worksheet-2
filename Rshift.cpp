//Right Shift (Remove Last Element): Modify the previous function to remove the last element instead.

#include <iostream>
using namespace std;

void rightShift(int array[], int &size);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;

    // Call the function to right shift and remove the last element
    rightShift(array, size);

    // Print the updated array
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

void rightShift(int array[], int &size) {
    if (size <= 0) {
        cout << "Array is empty. Cannot perform right shift." << endl;
        return;
    }

    // Shift all elements to the right
    for (int i = size - 1; i > 0; i--) {
        array[i] = array[i - 1];
    }

    // Clear the first element (optional, depending on your use case)
    array[0] = 0;  // You can set it to 0 or any other default value

    // Reduce the size of the array by 1
    size--;
}
