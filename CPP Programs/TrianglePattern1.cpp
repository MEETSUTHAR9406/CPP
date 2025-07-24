#include <iostream>
using namespace std;

int main() {

    int num;
    int n = 1;

    cout << "Enter the number: ";
    cin >> num;

    for(int i = 1; i <= num; i ++) {
        for(int j = 0; j < i; j++) {
            cout << n << " "; 
        }
        cout << endl;
        n++;
    }

    return 0;
}