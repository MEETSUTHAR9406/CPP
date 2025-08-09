#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "How many elementts you want to store? ";
    cin >> num;

    int arr[num]; // Initializing array of 'num' values.
    int size = sizeof(arr) / sizeof(arr[0]); // To find size of the array. 

    // Taking input of 'num' of array.
    for(int i = 0; i < size; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int sum = 0;
    // Adding numbers from index 0 to the end of the array.
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Printing the sum of the array.
    cout << "The sum of numbers in the array is " << sum << endl;

    return 0;
}