#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x, y;
    vector<pair<int, int>> arr;

    while (cin >> x >> y) {
        arr.emplace_back(x, y);
    }
    for (auto p : arr) {
        if (p.first == 30 || p.second == 30 || p.first + p.second == 30) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}