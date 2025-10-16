#include <iostream>
using namespace std;

int toBin(int num) {
    int ans = 0, pow = 1;

    while(num > 0) {
        int digit = num % 2;
        num /= 2;
        ans += (digit * pow);
        pow *= 10;
    }
    return ans;
}

int main() {

    int num, ans;

    cout << "Enter the number: ";
    cin >> num;

    ans = toBin(num);
    cout << "Decimal to binary of " << num << " is " << ans << endl;

    return 0;
}