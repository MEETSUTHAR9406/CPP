#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "How many elementts you want to store? ";
    cin >> num;

    int arr[num];
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "The sum of numbers in the array is " << sum << endl;

    return 0;
}