#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();  // fixed semicolon
        for (int val : nums) {
            int freq = 0;

            for (int el : nums) {
                if (el == val) {
                    freq++;
                }
            }
            if (freq > n / 2) {
                return val;
            }
        }
        return -1;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int ans = obj.majorityElement(nums);
    cout << "Majority Element: " << ans << endl;

    return 0;
}
