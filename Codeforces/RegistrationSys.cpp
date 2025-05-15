#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ansa[n];

    unordered_map<string, int> db;

    for (int i = 0; i < n; i++) {
        string name, ans;
        cin >> name;

        if (db[name] == 0) {
            ans = "OK";
            db[name] = 1;
        } else {
            ans = name + to_string(db[name]);
            db[name + to_string(db[name])] = 1;
            db[name]++;
        }

        ansa[i] = ans;
    }

    for (int i = 0; i < n; i++) {
        cout << ansa[i] << endl;
    }

    return 0;
}
