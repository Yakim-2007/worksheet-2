//Find Minimum: Write a function that returns the smallest element in the array.//
 #include <iostream>
 using namespace std;

    int min (int array[],int size);

    int main() {
        int array[] = {1,2,3,4,5,6,7,8,9,10};
        int size = 10;
        int smallest = min(array,size);

        cout << "The smallest element in the array is: " << smallest << endl;
    }

    int min (int array[],int size) {
        int smallest = array[0];

        for (int i = 1; i < size; i ++){
            if (array[i] < smallest) {
                smallest = array[i];
            }
        }
        return smallest;
    }  