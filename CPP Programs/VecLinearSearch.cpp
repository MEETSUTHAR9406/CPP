#include <iostream>
#include <vector>
using namespace std;

int VecLinearSearch(vector<int> vec, int size, int target) {
    for(int i = 0; i < size; i++) {
        if(vec[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {

    vector<int> vec = {73, 15, 92, 47, 6, 58, 31, 84, 20, 67};
    int size = vec.size();

    int target = 0;

    cout << "Which element you want to find in the vector??" << " ";
    cin >> target;

    // for(int i = 0; i < size; i++) {
    //     if(vec[i] == target) {
    //         cout << "Target found at index " << i << endl;
    //     }
    // }

    cout << "Element found at index " << VecLinearSearch(vec, size, target);

    return 0;
}