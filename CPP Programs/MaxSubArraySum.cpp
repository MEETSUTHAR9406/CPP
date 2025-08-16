#include <iostream>
#include <climits>
using namespace std;

void subsets(int arr[], int n) {
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            maxSum = max(sum, maxSum);
        }
        cout << "The sum is " << maxSum << endl;
    }
}

int main() {

    int n;

    cout << "How many elements you want to store in the array?" << " ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << endl;

    subsets(arr, n);

    return 0;
}