#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target) {
    vector<int> ans;
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr(4);
    int target;

    cout << "Enter your target value: ";
    cin >> target;

    for(int i = 0; i < arr.size(); i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    vector<int> ans = pairSum(arr, target);
    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}