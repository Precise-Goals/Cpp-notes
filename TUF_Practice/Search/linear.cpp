#include <bits/stdc++.h>
using namespace std;

int LinearSearch(vector<int>& arr, int t)
{
    for (int o = 0; o < arr.size(); o++) {
        if (arr[o] == t) {
            return o + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the Size of array: ";
    cin >> n;
    vector<int> arr(n, 0);

    for (int& i : arr) {
        cin >> i;
    }

    int tl;
    cout << "Enter the Target Element: ";
    cin >> tl;
    cout << "Target Element Found at:  " << LinearSearch(arr, tl) << endl;

    return 0;
}