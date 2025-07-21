#include <iostream>
using namespace std;

int main() {

    int num;
    int i = 1;

    cout << "Enter value of num: ";
    cin >> num;

    while (i <= num) {
        cout << i << " ";
        i++;
    }

    return 0;
}