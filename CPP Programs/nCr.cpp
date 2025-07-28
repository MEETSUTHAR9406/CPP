#include <iostream>
using namespace std;

int fact(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main() {

    int n, r;
    
    cout << "Enter value of n: ";
    cin >> n;
    
    cout << "Enter value of r: ";
    cin >> r;
    
    // int k = n - r;

    int nCr = fact(n) / (fact(r) * fact(n - r));

    cout << "nCr is: " << nCr << endl;

    return 0;
}