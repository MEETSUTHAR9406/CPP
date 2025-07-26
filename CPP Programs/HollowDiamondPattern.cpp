#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter the numumber: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    for (int i = num - 2; i >= 0; i--) {
        for (int j = 0; j < num - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}