#include <iostream>
using namespace std;

double binExpo(double x, int n) {
    long binForm = n;
    double ans = 1;

    while(binForm > 0) {
        if(binForm % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main() {

    double x;
    int n;

    cout << "Enter the number: ";
    cin >> x;

    cout << "Enter the expo: ";
    cin >> n;

    double final_ans = binExpo(x, n);
    cout << "The answer is: " << final_ans;

    return 0;
}