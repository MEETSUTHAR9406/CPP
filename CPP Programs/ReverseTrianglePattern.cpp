#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    for(int i = 0; i < num; i++) {
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++) {
            cout << ch-- << " ";
        }
        cout << endl;
    }
    return 0;
}