#include <bits/stdc++.h>
using namespace std;
void printArr(vector<int> arr);

void Sort(vector<int>& arr)
{
    int n = arr.size();
    for (int i = 0; i <= n - 1; i++) {
        int j = i; // select the elem by traversing 
        while (j > 0 && arr[j - 1] > arr[j]) { // check index non zero and if prev is bigger
            swap(arr[j - 1], arr[j]); //swap
            j--; // decrement j
        }
    }
}

int main()
{
    vector<int> array = { 32, 43, 65, 30, 25 };
    printArr(array);
    Sort(array);
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