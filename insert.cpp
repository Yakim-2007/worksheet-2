//Insert an Element: Write a function that inserts an element at a specified position.//

#include <iostream>
using namespace std;

void insertElement(int arr[], int &size, int element, int position);

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; // Example array (size 5)
    int size = 5; // Current number of elements
    int element = 99; // Element to insert
    int position = 2; // Position where it will be inserted (0-based index)

    insertElement(arr, size, element, position); // Insert element

    // Print updated array
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function to insert an element at a given position
void insertElement(int arr[], int &size, int element, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the right to create space
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = element;
    size++; // Increase the size
}
