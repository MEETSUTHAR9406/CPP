#include <iostream>
#include <string>
using namespace std;

int main() {

    string valid = "IVXLCDM";
    string s;

    cout << "Enter your string: ";
    getline(cin, s);

    for(int i = 0; i < s.length(); i++) {
        bool isValid = false;
        for(int j = 0; j < valid.length(); j++) {
            if(s[i] == valid[j]) {
                isValid = true;
                break;
            } 
        }
        if(!isValid) {
            cout << "Enter valid input." << endl;
            return 0;
        }
    }

    cout << "Input is valid." << endl;

    return 0;
}