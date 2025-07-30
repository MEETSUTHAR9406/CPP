#include <iostream>
using namespace std;

int sumtoN(int num) {
    int sum = 0;
    // runs from 1 to num, so every number is included.
    for(int i = 1; i <= num; i++) {
        sum += i; // sum = sum + i; 
    }
    return sum;
}

int main() {

    int num;

    // Takes user input.
    cout << "Enter the number: ";
    cin >> num;

    // Function call
    int sum = sumtoN(num);
    cout << "Sum from 1 to " << num << " is " << sum << endl;

    return 0;
}