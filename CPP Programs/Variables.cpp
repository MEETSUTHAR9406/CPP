#include <iostream>
using namespace std;

int main() {

    // Primitive Data Types  

    int age = 20;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = false;
    double price = 100.99;

    cout << "Age is " << age << endl;
    cout << "Size of int is " << sizeof(age) << endl;

    cout << "Grade is " << grade << endl;
    cout << "Size of char is " << sizeof(grade) << endl;

    cout << "PI is " << PI << endl;
    cout << "Size of float is " << sizeof(float) << endl;

    cout << "Is safe?? " << isSafe << endl;
    cout << "Size of bool is " << sizeof(bool) << endl; 

    cout << "Price is " << price << endl;
    cout << "Size of double is " << sizeof(double) << endl;

    return 0;
}