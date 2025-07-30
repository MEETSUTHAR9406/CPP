#include <iostream>
using namespace std;

int main() {

    int num = 10;
    int i = 1;

    // do-while loop will always run once, even if the condition is wrong.
    do {
        cout << i << " ";
        i++;
    } while (i <= num);

    cout << endl;

    return 0;
}