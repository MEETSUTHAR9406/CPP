#include <iostream>
using namespace std;

void primetoN(int num) {
    for(int i = 2; i <= num; i++) {
        bool isPrime = true;
        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            cout << i << " ";
        }
    }
}

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    primetoN(num);
    
    return 0;
}