#include <iostream>
using namespace std;

int main() {

    // int n = -45;

    // if (n >= 0) {
    //     cout << "N is positive";
    // } else {
    //     cout << "N is negative";
    // }

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible for voting.";
    } else {
        cout << "You are not eligible for voting.";
    }

    return 0;
}