#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target) { // O(n)
    vector<int> ans;
    int n = arr.size();

    int i = 0, j = n - 1;

    while(i < j) {
        int PS = arr[i] + arr[j];

        if(PS > target) {
            j--;
        } else if(PS < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main() {

    vector<int> arr(5);
    int target;

    cout << "Enter your target: ";
    cin >> target;

    for(int i = 0; i < arr.size(); i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << endl;

    int temp;

    cout << "Sorted array" << endl;

    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
        }
    }

    for(int i = 0; i < arr.size(); i++) {
        cout << "arr[" << i <<"]: " << arr[i] << endl;
    }

    cout << endl;

    vector<int> ans = pairSum(arr, target);
    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}