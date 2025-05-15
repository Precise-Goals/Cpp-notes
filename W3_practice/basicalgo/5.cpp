#include <iostream>
#include <vector>
using namespace std;

string veri(string s)
{
    if (s.length() <= 2 && s.substr(0, 2) != "if") {
        return s + "if";
    }

    return s;
}
int main()
{
    vector<string> arr;
    string s;
    while (cin >> s) {
        arr.emplace_back(s);
    }
    for (int i = 0; i <= arr.size(); i++) {
        cout << veri(arr[i]) << endl;
    }

    return 0;
}