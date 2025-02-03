//Search for an Element: Write a function that searches for a given element and returns its index (or -1 if not found).
 #include <iostream>
using namespace std;

int searchE(int array[], int num, int search);

int main () {
    int num = 10 , search;
    int array []= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Enter the number you want to search: " << endl;
    cin >> search;
int index = searchE(array, num, search);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;

}
int searchE(int array[], int num, int search) {
    for (int i = 0; i < num; i++) {
        if (array[i] == search) {
            return i;
        }
    }
    return -1;
}
