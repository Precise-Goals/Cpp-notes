#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int BinarySearch(vector<int>& arr, int t)
{
    int l = 0;
    int h = arr.size() - 1;

    while (l <= h) {
        int m = (l + h) / 2;
        if (arr[m] == t) {
            return m;
        } else if (arr[m] > t) {
            h = m - 1;
        } else {
            l = m + 1;
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
    sort(arr.begin(), arr.end());
    cout << "Target Element Found at:  " << BinarySearch(arr, tl) << endl;

    return 0;
}