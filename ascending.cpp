//Sort in Ascending Order: Implement a function to sort an array in ascending order. HINT: Research Bubble sort//
#include <iostream>
#include <algorithm>
void sortArray (int array[], int size );
void printArray (int array[], int size);
int main () {
    int array[] = { 3, 5, 2, 1, 4 };
    int size = sizeof(array) / sizeof(array[0]);
    std::cout << "Original array: ";
    printArray(array, size);
    sortArray(array, size);
    std::cout << "Sorted array: ";
    printArray(array, size);
    return 0;
}

void printArray (int array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void sortArray (int array[], int size) {
    std::sort (array, array + size);
void sortArray (int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}