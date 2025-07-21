#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    cout << (num >= 0 ? "Number is positive" : "Number is negative") << endl;

    return 0;
}