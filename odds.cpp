//Count Odd Numbers

#include <iostream>
using namespace std;

int countOdd(int array[],int size);

int main() {
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int odd = countOdd(array,size);

    cout << "The number of odd elements in the array is: " << odd << endl;
}
int countOdd(int array[],int size) {
    int odd = 0;

    for (int i = 0; i < size; i ++){
        if (array[i] % 2 != 0) {
            odd++;
        }
    }
    return odd;
}