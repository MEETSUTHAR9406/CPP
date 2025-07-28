#include <iostream>
using namespace std;

int sum(int a, int b) {
    a += 10; // 15
    b += 10; // 14
    return a + b; // 29
}

int main() {

    int x = 5, y = 4;

    cout << sum(x, y) << endl;
    cout << x << endl; // 5
    cout << y << endl; // 4

    return 0;
}