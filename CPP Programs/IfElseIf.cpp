#include <iostream>
using namespace std;

int main() {

    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Your grade is A.";
    } else if (marks >= 80 && marks < 90) {
        cout << "Your grade is B.";
    } else {
        cout << "Your grade is C.";
    }

    return 0;
}