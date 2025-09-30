#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "IVXLCDM";
    int n = 7;

    string s;

    cout << "Enter your string: ";
    getline(cin, str);

    for(int i = 0; i < s.length(); i++) {
        bool isValid = false;
        for(int j = 0; j < str.length(); j++) {
            if(s[i] == str[j]) {
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