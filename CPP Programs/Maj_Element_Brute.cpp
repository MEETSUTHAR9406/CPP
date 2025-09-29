#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr(5);
    int freq;

    for(int i = 0; i < arr.size(); i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "\nFrequencies of elements:\n";

    for(int i = 0; i < arr.size(); i++) {
        bool counted = false;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                counted = true;
                break;
            }
        }
        if(counted) continue;

        freq = 0;
        for(int el : arr) {
            if(el == arr[i]) {
                freq++;
            }
        }
        
        cout << arr[i] << " occurs " << freq << " times" << endl;
    }

    return 0;
}