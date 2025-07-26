#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num - i - 1; j++) {
            cout << "  ";
        }

        for(int k = 1; k <= i + 1; k++) {
            cout << k << " ";
        }

        for(int l = i; l >= 1; l--) {
            cout << l << " ";

        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num - i - 1; j++) {
            cout << "  ";
        }

        char ch = 'A';
        for(int k = 0; k <= i; k++) {
            cout << ch << " ";
            ch++;
        }

        ch -= 2;
        for(int l = 0; l < i; l++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num - i - 1; j++) {
            cout << "  ";
        }

        for(int k = 0; k <= i; k++) {
            cout << "* ";
        }

        for(int l = 0; l < i; l++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}