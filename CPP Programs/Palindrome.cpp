#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    if(num < 0) return false;

    int temp = num;
    long long reversed = 0;

    while(num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return temp == reversed;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(isPalindrome(num)) {
        cout << num << " is a Palindrome number." << endl;
    } else {
        cout << num << " is not a Palindrome number." << endl;
    }

    return 0;
}