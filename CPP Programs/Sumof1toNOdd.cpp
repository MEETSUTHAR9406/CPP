#include <iostream>
using namespace std;

int main() {

    int num;
    int oddSum = 0;

    cout << "Enter value of last number: ";
    cin >> num;

    for(int i = 1; i <= num; i += 2) {
        oddSum += i;
    }

    cout << "Sum of odd numbers up-to 1 to " << num << " is " << oddSum;

    return 0;
}