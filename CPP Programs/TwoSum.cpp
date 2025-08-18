#include <iostream>
#include <vector>
using namespace std;

int main() {

    int num;
    int target = 13;

    cout << "How many elements you want to store in array?" << " ";
    cin >> num;
    
    vector<int> arr(num);
    for(int i = 0; i < num; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i]; 
    }

    bool found = false;
    for(int i = 0; i < num - 1; i++) {
        for(int j = i + 1; j < num; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Target " << target << " found at index " << i << "(" << arr[i] << ")" << " + " << j << "(" << arr[j] << ")" << endl;
                found = true;
            }
        }
    }

    if(!found) cout << "No pairs found with sum = " << target << endl;

    return 0;
}