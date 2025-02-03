// Find Maximum: Write a function that returns the largest element in the array.//
#include <iostream>
using namespace std;

int max (int array[],int size);

int main() {
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int largest = max(array,size);

    cout << "The largest element in the array is: " << largest << endl;

return 0;
}
int max (int array[],int size) {
    int largest = array[0];

    for (int i = 1; i < size; i ++){
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    return largest;
}
