#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int freq = 1;
    for(int i = 1; i < n; i++) {
        if(nums[i] == nums[i - 1]) {
            freq++;
            if(freq > n / 2) {
                return nums[i];
            }
        } else {
            freq = 1;
        }
    }
    return -1;
}

int main() {

    vector<int> nums = {2, 2, 1, 1, 2};
    int result = majorityElement(nums);

    if(result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}