#include <iostream>
#include <vector>
using namespace std;

// vector<int> MajSum(vector<int> nums) {
//     vector<int> ans;

//     for(int i = 0; i < )
// }

int main() {

    vector<int> nums = {2, 7, 11, 15};

    for(int val : nums) {
        int freaq = 0;
        for(int el : nums) {
            if(el == val) {
                freaq++;
            }
        }
    }

    return 0;
}