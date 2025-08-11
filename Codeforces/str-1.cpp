#include <bits/stdc++.h>
#include <vector>

using namespace std;

string ChotaCleanString(string& s, int i)
{
    if (i >= s.length())
        return "";
    if (s[i] == '*') {
        return ChotaCleanString(s, i + 2);
    } else if (s[i] == '#' || s[i] == '$') {
        return ChotaCleanString(s, i + 4);
    } else {
        return s[i] + ChotaCleanString(s, i + 1);
    }
}
string Csk(string &s){
    return ChotaCleanString(s,0);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    cout << Csk(s) << endl;
    return 0;
}