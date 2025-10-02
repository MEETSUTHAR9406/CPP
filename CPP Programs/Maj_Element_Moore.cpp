#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int freq = 0, ans = 0;

    for(int num : nums) {
        if(freq == 0) {
            ans = num;
        }

        if(num == ans) {
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
}

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: \n";
    for(int i = 0; i < n; i++) {
        cout << "nums[" << i << "]: ";
        cin >> nums[i];
    }

    int result = majorityElement(nums);

    if(result != - 1) {
        cout << "Majority element is " << result << endl;
    } else {
        cout << "No Majority Element found!" << endl;
    }

    return 0;
}