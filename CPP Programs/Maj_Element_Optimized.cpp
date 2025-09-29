#include <iostream>
#include <vector>
using namespace std;

void sorted(vector<int>& arr) {
    int temp;
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nSorted array:\n";

    for(int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: " << arr[i] << endl;
    }
}

void majElement(vector<int> arr) {
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        bool counted = false;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                counted = true;
                break;
            }
        }
        if(counted) continue;

        int freq = 0;
        for(int el : arr) {
            if(el == arr[i]) {
                freq++;
            }
        }
        cout << arr[i] << " occurs " << freq << " times" << endl;
    }
}

int main() {

    vector<int> arr(5);

    for(int i = 0; i < arr.size(); i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    sorted(arr);
    majElement(arr);

    return 0;
}