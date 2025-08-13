#include <bits/stdc++.h>
using namespace std;
void printArr(vector<int> arr);

void Merge(vector<int>& arr, int l, int m, int h)
{
    vector<int> temp;
    int left = l;
    int right = m + 1;
    while (left <= m && right <= h) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= m) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= h) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = l; i <= h; i++) {
        arr[i] = temp[i - l];
    }
}

void Sort(vector<int>& arr, int l, int h)
{
    if (l == h) {
        return;
    }
    int m = (l + h) / 2;
    Sort(arr, l, m);
    Sort(arr, m + 1, h);
    Merge(arr, l, m, h);
}
int main()
{
    vector<int> array = { 32, 43, 65, 30, 25 };
    printArr(array);
    Sort(array, 0, array.size() - 1);
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