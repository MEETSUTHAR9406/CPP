#include <iostream>
using namespace std;

int main() {

    // Post-Increment Operators

    // a++
    int a = 10;
    int b = a++;

    cout << "Value of b is " << b << endl;
    cout << "Value of a is " << a << endl;

    // a--
    int a1 = 10;
    int b1 = a1--;

    cout << "Value of b1 is " << b1 << endl;
    cout << "Value of a1 is " << a1 << endl;

    // Pre-Increment Operators

    // ++a
    int c = 20;
    int d = ++c;

    cout << "Value of d is " << d << endl;
    cout << "Value of c is " << c << endl;

    // --a
    int c1 = 20;
    int d1 = --c1;

    cout << "Value of d1 is " << d1 << endl;
    cout << "Value of c1 is " << c1 << endl;

    return 0;
}