#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<bool> visited(n, false); // To mark counted elements

    for(int i = 0; i < n; i++) {
        if(visited[i]) continue; // Skip already counted elements

        int count = 1; // Current element count
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = true; // Mark as counted
            }
        }

        cout << arr[i] << " -> " << count << (count > 1 ? " times" : " time") << endl;
    }

    return 0;
}
