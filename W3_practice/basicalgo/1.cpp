#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<pair<int, int>> mpp;
    int x, y;
    while (cin >> x >> y) {
        mpp.emplace_back(x, y);
    }

    for (auto m : mpp) {
        if (m.first == m.second) {
            cout << 3 * (m.first + m.second) << endl;
        } else {
            cout << m.first + m.second << endl;
        }
    }

    return 0;
}