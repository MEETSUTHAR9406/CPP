#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    for (int i = 1; i <= num; i += 2) {
        cout << i << " ";
    }

    return 0;
}