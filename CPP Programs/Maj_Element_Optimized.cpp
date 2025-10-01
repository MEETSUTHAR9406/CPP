#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& nums) {
    int temp;
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] > nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

void printSorted(vector<int>& nums) {
    cout << "Sorted array is: " << endl;
    for(int i = 0; i < nums.size(); i++) {
        cout << "nums[" << i << "]: " << nums[i] << endl;
    }
}

void isMajority(vector<int> nums) {
    int n = nums.size();
    bool found = false;

    for(int i = 0; i < n; i++) {
        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(nums[i] == nums[j]) {
                count++;
            }
        }

        if(count > n / 2) {
            cout << nums[i] << " is the majority element" << endl;
            cout << "It appears " << count << " times" << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "No majority element found." << endl;
    }
}

int main() {

    int x;

    cout << "Enter number of elements: ";
    cin >> x;

    vector<int> nums(x);
    cout << "Enter elements: " << endl;
    for(int i = 0; i < x; i++) {
        cout << "nums[" << i << "]: ";
        cin >> nums[i];
    }

    sort(nums);
    printSorted(nums);
    isMajority(nums);

    return 0;
}