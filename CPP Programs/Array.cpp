#include <iostream>
using namespace std;

int main() {

    // int marks[] = {99, 100, 54, 36, 88};

    // cout << sizeof(marks) << endl;
    // int size = sizeof(marks) / sizeof(marks[0]);

    // cout << "Value of array using simple method" << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // cout << "Using for loop" << endl;
    // for(int i = 0; i < size; i++) {
    //     cout << marks[i] << " ";
    // }

    // User input for array.
    int arr[5];
    int size_sec = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size_sec; i++) {
        cout << "Enter value at index " << i + 1 << " ";
        cin >> arr[i];
    }

    for(int i = 0; i < size_sec; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}