#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "How many elements you want to store in the array? ";
    cin >> num;

    int arr[num];
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0 ; i < size; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "Before reversing the array:" << endl;

    for(int i = 0; i < size; i++) {
        cout << "arr[" << i << "]: " << arr[i] << endl;
    }

    cout << endl;
    cout << "After reversing the array:" << endl;
    for(int i = size - 1; i >= 0; i--) {
        cout << "arr[" << i << "]: " << arr[i] << endl;
    }

    return 0;
}