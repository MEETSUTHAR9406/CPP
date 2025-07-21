#include <iostream>
using namespace std;

int main() {

    char ch;

    cout << "Enter your character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase character.";
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is a uppercase character.";
    } else {
        cout << "Enter valid character.";
    }

    return 0;
}