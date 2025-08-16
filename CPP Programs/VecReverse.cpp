#include <iostream>
#include <vector>
using namespace std;

void VecReverse(vector<int> vec, int size) {
    for(int i = size - 1; i >= 0; i--) {
        cout << vec[i] << " ";
    }
}

int main() {

    vector<int> vec = {12, 87, 43, 29, 65, 7, 94, 51, 38, 76};
    int size = vec.size();

    cout << "Original Vector is " << endl;
    for(int i = 0; i < size; i++) {
        cout << vec[i] << " ";
    }

    cout << endl;
    cout << "Reversed Vector is " << endl;
    VecReverse(vec, size);

    return 0;
}