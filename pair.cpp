//Find Pairs with a Given Sum: Write a function that finds all pairs of elements whose sum equals a given value.

#include <iostream>

using namespace std;
void findPairsWithSum(int arr[], int size, int targetSum);

int main() {
    int arr[] = {2, 4, 3, 6, 5, 7, 1};
    int size = 7;
    int targetSum = 7;

    cout << "Pairs with sum " << targetSum << " are:" << endl;
    findPairsWithSum(arr, size, targetSum);

    return 0;
}

void findPairsWithSum(int arr[], int size, int targetSum) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == targetSum) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }
}
