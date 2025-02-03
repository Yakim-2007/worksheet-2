//Rotate Left: Write a function that rotates the array elements one position to the left.//
#include <iostream>
using namespace std;

void rotateLeft(int array[], int size);
int main () {
    int array[] = { 1, 2, 3, 4, 5 };
    int size = 5 ;

    rotateLeft(array, size);
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

 return 0;   
}
void rotateLeft(int array[], int size){
    int left = array[0];
    for (int i = 0; i < size - 1; i++){
        array[i] = array[i + 1];
    }
    array[size - 1] = left;
}