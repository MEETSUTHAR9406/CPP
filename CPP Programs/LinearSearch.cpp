#include <iostream>
using namespace std;

int linearSearch(int target, int arr[], int size, int num) {
    for(int i = 0; i < num; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {

    int num;
    int target = 0;
    // int arr[10];

    cout << "How many elements you want to store? ";
    cin >> num;

    int arr[num];

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Which number you want to find? ";
    cin >> target;

    // for(int i = 0; i < size; i++) {
    //     if(target == arr[i]) {
    //         cout << "Number " << arr[i] << " found at index " << i << " ";
    //         break;
    //     }
    // }

    cout << "Index is " << linearSearch(target, arr, size, num);

    return 0;
}