#include <iostream>
using namespace std;

int main() {

    int num;
    int i = 2;

    cout << "Enter the number: ";
    cin >> num;

    for(int i = 2; i <= num / 2; i++) {
        if(num % i != 0) {
            cout << num << " is a prime number.";
            break;
        } else {
            cout << num << " is Not a prime number.";
            break;
        }
    }

    return 0;
}