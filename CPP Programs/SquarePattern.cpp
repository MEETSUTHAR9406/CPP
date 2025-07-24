#include <iostream>
using namespace std;

int main() {

    // int num = 1;
    char ch = 'A';
    int n = 3;

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << ch << " ";
            ch++; 
        }
        cout << endl;
    }

    return 0;
}