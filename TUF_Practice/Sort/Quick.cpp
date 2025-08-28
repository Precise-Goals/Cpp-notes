#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr);

int F(vector<int>& arr, int l, int h)
{
    int pi = arr[l];
    int i = l;
    int j = h;
    while (i < j) {
        while (arr[i] <= pi && i < h) {
            i++;
        }
        while (arr[j] >= pi && j > l) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

void Sort(vector<int>& arr, int l, int h)
{
    if (l < h) {
        int pi = F(arr, l, h);
        Sort(arr, l, pi - 1);
        Sort(arr, pi + 1, h);
    }
}

int main()
{
    vector<int> arr = { 43, 54, 23, 12, 1, 34, 2 };
    printArr(arr);
    Sort(arr, 0, arr.size()-1);
    printArr(arr);
    return 0;
}

void printArr(vector<int> &arr)
{
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}