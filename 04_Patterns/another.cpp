#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1(5, 6);
    vector<int> v2(3, 9);
    vector<int> v3(8, 2);

    vector<vector<int>> multi;
    int n = multi.size();
    multi.push_back(v1);
    multi.push_back(v2);
    multi.push_back(v3);

    for (int i = 0; i < multi.size(); i++) {
        for (int j = 0; j < multi[i].size(); j++) {
            cout << multi[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// vector<vector<int>> multi(n, vector<int> individual);