#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < i; j++) {
            cout << "  ";
        }
        for(int k = 0; k < num - i; k++) {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < i; j++) {
            cout << "  ";
        }

        for(int k = 0; k < num - i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < num; i++) {
        char ch = 'A' + i;
        for(int j = 0; j < i; j++) {
            cout << "  ";
        }

        for(int k = 0; k < num - i; k++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}