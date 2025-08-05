#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        cout << "Enter value at index " << i + 1 << " ";
        cin >> arr[i];
    }

    int max = arr[0]; // int max = __WINT_MIN__
    int min = arr[size - 1]; // int min = __INT_MAX__

    cout << "Your array is " << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    for(int i = 0; i < size; i++) {
        if(arr[i] >= max) {
            max = arr[i];
        }
    }

    for(int i = size - 1; i >= 0; i--) {
        if(arr[i] <= min) {
            min = arr[i];
        }
    }

    cout << endl;

    cout << "Maximum element in the array is " << max << endl;
    cout << "Minimum element in the array is " << min << endl;

    return 0;
}