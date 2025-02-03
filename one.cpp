//Sum of Elements: Write a function that takes an array and its size, then returns the sum of its elements.//

#include <iostream>
using namespace std;

int sum (int array[],int size);

int main()
{
    int array[5] = {1,2,3,4,5};
    int size = 5;

    int Sum = sum(array,size);
    cout << "The sum of the elements in the array is: " << Sum << endl;
    return 0;
}

int sum (int array[],int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

