#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr);

void Sort(vector<int>& arr, int n)
{
    if (n == 1) {
        return;
    }
    bool Sw = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            Sw = 1;
        }
    }

    if (Sw == 0) {
        return;
    }

    Sort(arr, n - 1);
}

int main()
{
    int n;
    n = 7;
    vector<int> array = { 45, 65, 23, 43, 12, 32, 1 };
    printArr(array);
    Sort(array, n);
    printArr(array);

    return 0;
}

void printArr(vector<int> arr)
{
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}