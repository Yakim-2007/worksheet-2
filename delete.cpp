//Delete an Element: Write a function that removes an element at a given position.//
#include <iostream>
using namespace std;

void deleteElement(int arr[], int &size, int position);

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; // Example array (size 5)
    int size = 5; // Current number of elements
    int position = 2; // Position of element to delete (0-based index)

    deleteElement(arr, size, position); // Delete element

    // Print updated array
    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function to delete an element at a given position
void deleteElement(int arr[], int &size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the left to remove the element
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--; // Decrease the size
}
