#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums;
    int ans = 0;

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(20);
    nums.push_back(10);
    nums.push_back(50);
    nums.push_back(50);

    for(int val :  nums) {
        ans = ans ^ val;
    }

    cout << "Single unique number is " << ans << endl;

    return 0;
}