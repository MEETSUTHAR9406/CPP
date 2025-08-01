#include <iostream>
using namespace std;

int main() {

    // Left shift
    // a * 2^b
    cout << (10 << 1) << endl;

    // Right shift
    // a / 2^b
    cout << (10 >> 1) << endl;
    cout << (10 >> 2) << endl;

    // Exercise
    // cout << (10 << 2) << endl; ==> 40
    // cout << (10 >> 1) << endl; ==> 5

    return 0;
}