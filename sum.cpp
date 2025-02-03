//Cumulative Sum: Write a function that modifies an array such that each element is the sum of itself and all previous elements.
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void cumulativeSum(int arr[], int size); // Function declaration

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int size = 5; // Number of elements in array

    cumulativeSum(arr, size); // Call function to modify the array

    // Print modified array
    cout << "Cumulative Sum: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function to modify the array with cumulative sum
void cumulativeSum(int arr[], int size) {
    for (int i = 1; i < size; i++) { 
        arr[i] = arr[i] + arr[i - 1]; // Add previous element to current
    }
}
