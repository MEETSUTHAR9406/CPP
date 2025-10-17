#include <iostream>
using namespace std;

int DectoBinary(int num) {
    int ans = 0, pow = 1;

    while (num > 0) {
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

    for(int i = 1; i <= 10; i++) {
        cout << "Decimal to binary of " << i << " is " << DectoBinary(i) << endl;
    }

    // ans = DectoBinary(num);
    // cout << "Decimal to binary of " << num << " is " << ans << endl;

    return 0;
}