#include <iostream>
using namespace std;

int main() {

    cout << (5 - 3 * 6) << endl;
    // Parenthesis overrides the precedence.
    cout << ((5 - 3) * 6) << endl;

    // Checking associativity
    cout << (4 * 5 % 2) << endl; // Left to right asso.
    cout << (4 * (5 % 2)) << endl;

    return 0;
}