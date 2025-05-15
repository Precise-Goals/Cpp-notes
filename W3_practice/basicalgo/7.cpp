#include <iostream>
#include <vector>
using namespace std;
void change(string s)
{
    swap(s[0], s[s.size() - 1]);
    cout << s << endl;
}
void takeInp(vector<string>& arr)
{
    string s;
    cin >> s;
    arr.emplace_back(s);
}
int main()
{
    vector<string> arr;

    takeInp(arr);

    for (int i = 0; i < arr.size(); i++) {
        change(arr[i]);
    }

    return 0;
}