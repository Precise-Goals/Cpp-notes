#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int x;
    while (cin >> x) {
        arr.emplace_back(x);
    }
    for (int p : arr) {
        if (abs(p - 100) <= 10 || abs(p - 200) <= 10) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}