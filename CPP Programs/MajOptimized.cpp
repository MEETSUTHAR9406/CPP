#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int majority = nums[n / 2];

    cout << "Majority element: " << majority << endl;

    return 0;
}