//Find Mode: Write a function that finds the most frequently occurring element in an array.//

#include <iostream>
using namespace std;

// Function to find the mode (most frequently occurring element)
int findMode(int arr[], int size);

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Example array
    int size = 10;

    int mode = findMode(arr, size);  // Call the function to find the mode
    cout << "Mode: " << mode << endl;  // Print the mode

    return 0;
}

// Function to find the mode in an array
int findMode(int arr[], int size) {
    int maxCount = 0;  // To store the highest frequency count
    int mode = arr[0]; // Assume the first element is the mode

    // Outer loop to check each element in the array
    for (int i = 0; i < size; i++) {
        int count = 0;  // Reset count for each element

        // Inner loop to count occurrences of arr[i]
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;  // Increase count if there's a match
            }
        }

        // If the current element appears more times than the previous mode, update mode
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    return mode;  // Return the mode (most frequent element)
}
