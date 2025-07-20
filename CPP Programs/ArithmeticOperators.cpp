#include <iostream>
using namespace std;

int main() {

    // Arithmetic Operators (+, -, *, /, %)

    int a = 10, b = 5;
    int c = 5;
    double d = 2;
    int sum = a + b;

    cout << sum << endl;
    cout << "Sum is " << (a + b) << endl;
    cout << "Difference is " << (a - b) << endl;
    cout << "Multiplication is " << (a * b) << endl;
    cout << "Division is " << (a / b) << endl;
    cout << "Division is " << (c / d) << endl;
    cout << "Division is " << (5 / (double)(2)) << endl;
    cout << "Modulo is " << (a % b) << endl;
    
    return 0;
}