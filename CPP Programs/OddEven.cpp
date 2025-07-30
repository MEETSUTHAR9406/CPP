#include <iostream>
using namespace std;

int main() {

    int num;

    // Takes user input
    cout << "Enter the number: ";
    cin >> num;

    // Checks if number is divisible by two or not.
    if(num % 2 == 0) {
        cout << num << " is a even number."; // if the remainder of a certain value divided by 2 would be zero, then the condition would be fulfilled
    } else {
        cout << num << " is a odd number."; // else it will print odd values.
    }
    return 0;
}