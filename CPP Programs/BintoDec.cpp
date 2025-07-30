#include <iostream>
using namespace std;

int BintoDecimal(int num) {
    int ans = 0, pow = 1;

    // runs until number is greater than zero.
    while (num > 0) {
        int digit = num % 10; 
        num /= 10;

        ans += (digit * pow);
        pow *= 2; // Multiple 2 every time loops runs: 1 * 2 * 2 * 2...
    }
    return ans;
}

int main() {

    int num;

    // Input from user.
    cout << "Enter the number: ";
    cin >> num;

    // BintoDecimal(num);
    cout << "Binary to decimal of " << num << " is " << BintoDecimal(num);

    return 0;
}