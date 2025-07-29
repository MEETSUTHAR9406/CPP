#include <iostream>
using namespace std;

int BintoDecimal(int num) {
    int ans = 0, pow = 1;

    while (num > 0) {
        int digit = num % 10;
        num /= 10;

        ans += (digit * pow);
        pow *= 2;
    }
    return ans;
}

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    // BintoDecimal(num);
    cout << "Binary to decimal of " << num << " is " << BintoDecimal(num);

    return 0;
}