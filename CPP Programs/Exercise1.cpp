#include <iostream>
using namespace std;

int prime(int num) {
    // setting flag = 1.
    int flag = 1;
    // Runs from 2 to num / 2.
    // 0, 1 are not in the category of prime and non-prime.
    // goes up-to num / 2 cause if it is not divisible up-to num / 2 then it won't divide by any values.
    for(int i = 2; i < num / 2; i++) {
        if(num % i != 0) {
            flag = 1;
            break;
        } else {
            flag = 0; // If the number is not-prime it will set flag to 0.
        }
    }

    if(flag == 1) {
        cout << "Number is prime."; // When flag = 1
    } else {
        cout << "Number is not prime."; // When flag = 0.
    }
    
    return num;
}

int main() {

    int num;

    // Taking a user input of a number.
    cout << "Enter the number: ";
    cin >> num;

    // Function call.
    prime(num);

    return 0;
}