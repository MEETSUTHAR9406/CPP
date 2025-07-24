#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        int n = 1;
        for(int j = 0; j < i; j++) {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }

    return 0;
}