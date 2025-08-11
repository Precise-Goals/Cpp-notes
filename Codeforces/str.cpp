#include <bits/stdc++.h>
#include <vector>

using namespace std;

string cleanStr(string& s)
{
    string res;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '#' || s[i] == '$') {
            i += 2;
        } else if (s[i] == '*') {
            i += 1;
        } else {
            res += s[i];
        }
        i++;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    cout << cleanStr(s) << endl;
    return 0;
}