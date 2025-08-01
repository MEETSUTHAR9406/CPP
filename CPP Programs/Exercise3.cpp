#include <iostream>
using namespace std;

int fibo(int num) {
    if(num == 0 || num == 1) {
        return num;
    } else {
        return fibo(num - 1) + fibo(num - 2);
    }
}

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        cout << fibo(i) << " ";
    }

    cout << "\nFibonacci number at position " << num << " is: " << fibo(num) << endl;

    return 0;
}