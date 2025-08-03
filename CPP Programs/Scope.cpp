#include <iostream>
using namespace std;

int x = 10; // global
void fun() {
    int x = 10; // local
}

void fun2() {
    cout << x << endl;
}

int main() {

    {
        int x = 10; // local
    }

    for(int i = 0; i < 10; i++) { // local

    }

    // This will cause error cause i is local scope.
    // cout << i << endl;  

    cout << x << endl;
    fun2();

    return 0;
}