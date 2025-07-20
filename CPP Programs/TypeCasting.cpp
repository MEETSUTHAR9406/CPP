#include <iostream>
using namespace std;

int main() {

    // Implicit Typecasting

    char grade = 'A'; // ASCII 65
    char grade2 = 'a'; // ASCII 97
    
    int value = grade;
    int value2 = grade2;

    cout << value << endl;
    cout << value2 << endl;

    // Explicit Typecasting
    
    cout << "\n";

    double price = 10.99;
    int newPrice = (int)price;

    cout << newPrice << endl;

    return 0;
}