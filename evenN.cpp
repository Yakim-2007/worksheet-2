//Count Even Numbers: Write a function that returns the count of even numbers in the array.
#include <iostream>
using namespace std;

int countEven(int array[], int size);

int main () {
    int array [] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int count = countEven(array,size);

    cout << "The number of even numbers in the array is: " << count << endl;
}
int countEven(int array[], int size ) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}