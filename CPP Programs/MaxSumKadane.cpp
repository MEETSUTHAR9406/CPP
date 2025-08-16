#include <iostream>
#include <climits>
using namespace std;

void SumofSubsets(int arr[], int n) {
    int maxSum = INT_MIN;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        maxSum = max(sum, maxSum);
        if(sum < 0) {
            sum = 0;
        }
    }
    cout << "Max is " << maxSum << endl;
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

    SumofSubsets(arr, n);

    return 0;
}