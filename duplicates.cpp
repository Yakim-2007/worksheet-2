//Remove Duplicates: Write a function that removes duplicate values from an array.//
#include <iostream>
using namespace std;

void removeDuplicates(int array[], int &size);

int main (){
    int array[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };
    int size = 10;

    cout << "Original array: ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    removeDuplicates(array, size);
    cout << " Array with duplicates removed: "; 
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}
void removeDuplicates(int array[], int &size){
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if (array[i] == array[j]){
                for (int k = j; k < size; k++){
                    array[k] = array[k + 1];
                }
                size--;
                j--;
            }
        }
    }
}