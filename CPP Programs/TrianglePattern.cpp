#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        for(int j = 0; j < i; j++) {
            cout << '*' << " ";
        }
        cout << endl;
    }

    // ==================== Character Increment Pattern ====================

    // char ch;

    // cout << "Enter the character: ";
    // cin >> ch;

    // for(int i = 1; i <= num; i++) {
    //     for(int j = 0; j < i; j++) {
    //         cout << ch << " "; 
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // ==================== Number Increment Pattern ====================

    // int n;

    // cout << "Enter the number: ";
    // cin >> n;

    // for(int i = 1; i <= num; i++) {
    //     for(int j = 0; j < i; j++) {
    //         cout << n << " ";
    //         n++;
    //     }
    //     cout << endl;
    // }

    return 0;
}