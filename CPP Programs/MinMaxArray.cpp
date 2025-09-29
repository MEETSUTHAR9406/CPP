#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr(10);

    for(int i = 0; i < arr.size(); i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int minVal = arr[0];
    int maxVal = arr[0];

    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] < minVal) minVal = arr[i];
        if(arr[i] > maxVal) maxVal = arr[i];
    }

    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;

    return 0;
}