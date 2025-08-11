#include <iostream>
#include <vector>
using namespace std;

int main() {

    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    // cout << "Size = " << vec.size() << endl;

    vector<int> vec;

    cout << "Size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "After pushing size = " << vec.size() << endl;

    vec.pop_back();
    cout << "After popping size = " << vec.size() << endl;

    cout << vec.front() << endl; 
    cout << vec.back() << endl; 

    cout << vec.at(1) << endl;

    // for(int val : vec) {
    //     cout << val << endl;
    // }

    return 0;
}