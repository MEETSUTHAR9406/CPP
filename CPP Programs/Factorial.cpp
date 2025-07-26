#include <iostream>
using namespace std;

int fact(int num) {
    if(num == 0 || num == 1) {
        return 1;
    } else {
        return num * fact(num - 1);
    }
}

int main() {

    int num;

    cout << "Enter the number to find its factorial: ";
    cin >> num;

    int factorial = fact(num);

    cout << "Factorial of " << num << " is " << factorial << endl;

    return 0;
}