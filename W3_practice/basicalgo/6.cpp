#include <iostream>
#include <vector>
using namespace std;
string change(string s, int n)
{
    return s.erase(n, 1);
}
int main()
{
    vector<pair<string, int>> arr;
    int x;
    string s;
    while (cin >> s >> x) {
        arr.emplace_back(s, x);
    }
    for (int i = 0; i < arr.size(); i++) {
        cout << change(arr[i].first, arr[i].second) << endl;
    }
    return 0;
}