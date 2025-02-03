#include <iostream>
using namespace std;

int average(int arr[], int size);

int main () {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int avg= average(arr, size);

    cout << "Average of elements: " << avg << endl;
    return 0;    

}
int average(int arr[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum/size;
} 