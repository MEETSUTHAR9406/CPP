#include <iostream>
using namespace std;

void print() {
    cout << "HelloWorld!" << endl;
}

int sum(int a, int b) {
    int s = a + b;
    return s;
}

int max(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {

    print();
    cout << sum(10, 5) << endl;
    cout << max(23, 53) << endl;

    return 0;
}