#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter the number to print pattern: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        char ch = 'A';
        for(int j = 1; j <= num; j++) {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }

    return 0;
}