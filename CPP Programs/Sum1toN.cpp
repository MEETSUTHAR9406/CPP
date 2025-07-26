#include <iostream>
using namespace std;

int sumtoN(int num) {
    int sum=  0;
    for(int i = 1; i <= num; i++) {
        sum += i;
    }
    return sum;
}

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    int sum = sumtoN(num);
    cout << "Sum from 1 to " << num << " is " << sum << endl;

    return 0;
}