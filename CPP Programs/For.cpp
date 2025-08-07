#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    // We will mostly use for loops in most of the tasks, cause it is easier and faster.
    for (int i = 1; i <= num; i += 2) {
        cout << i << " ";
    }

    return 0;
}