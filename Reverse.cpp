//Reverse an Array: Write a function that reverses the order of elements in the array//
  #include <iostream>
  using namespace std;

void reverse(int array[],int size);
int main() {
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    reverse(array,size);

    // adds a space after each element//

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
return 0;
}

void reverse(int array[],int size) {
     // Loop to reverse the array
    for (int i = 0; i < size/2; i++){
        // Swap element
      int swamped = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = swamped;
    }
}