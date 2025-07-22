#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter max number of stars in a row: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= num; j++) {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}