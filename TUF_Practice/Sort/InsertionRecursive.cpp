#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr);

void Sort(vector<int>& arr, int i, int n)
{
    if (i == n) {
        return;
    }
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        swap(arr[j - 1], arr[j]);
        j--;
    }
    Sort(arr, i + 1, n);
}

int main()
{
    vector<int> arr = { 43, 54, 23, 12, 1, 34, 2 };
    printArr(arr);
    Sort(arr, 0, arr.size());
    printArr(arr);
    return 0;
}

void printArr(vector<int> arr)
{
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}