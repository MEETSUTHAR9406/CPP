#include <iostream>
using namespace std;

int prime(int num) {
    int flag = 1;
    for(int i = 2; i < num / 2; i++) {
        if(num % i != 0) {
            flag = 1;
            break;
        } else {
            flag = 0;
        }
    }

    if(flag == 1) {
        cout << "Number is prime.";
    } else {
        cout << "Number is not prime.";
    }
    return num;
}

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    prime(num);

    return 0;
}