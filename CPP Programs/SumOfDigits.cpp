#include <iostream>
using namespace std;

int main() {

    int num;
    int digits = 0;
    int sum = 0;

    cout << "Enter the number: ";
    cin >> num;

    while(num > 0) {
        digits = num % 10;
        sum += digits;
        num /= 10;
    }

    cout << "The sum is " << sum << endl;
    
    return 0;
}