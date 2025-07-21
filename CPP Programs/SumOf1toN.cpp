#include <iostream>
using namespace std;

int main() {

    int sum = 0;
    int num;

    cout << "Enter max number limit for sum: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        sum += i;
    }

    cout << "Sum of numbers up-to 1 to " << num << " is " << sum;

    return 0;
}
