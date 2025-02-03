//Find Second Largest Element: Write a function to find the second largest element in an array.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 8, 25, 25, 30}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size); // Function call

    if (secondLargest != -1) {
        cout << "Second Largest Element: " << secondLargest << endl;
    }

    return 0;
}

// Function to find the second largest element
int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array must have at least two elements." << endl;
        return -1; // Return error code
    }

    int largest = arr[0], secondLargest = -1; 

    // Loop through the array
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {  
            secondLargest = largest;  // Update second largest
            largest = arr[i];  // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {  
            secondLargest = arr[i];  // Update second largest if smaller than largest
        }
    }

    return secondLargest;
}
