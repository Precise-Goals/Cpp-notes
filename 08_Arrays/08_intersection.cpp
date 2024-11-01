#include <iostream>
using namespace std;
int printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int comEl(int arr[], int m, int err[], int n)
{
    cout << "Common Elements are ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == err[j]) {
                cout << arr[i] << " ";
            }
        }
    }
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int err[] = { 7, 8, 2, 4, 10 };
    int m = sizeof(arr) / 4;
    int n = sizeof(err) / 4;
    cout << "Both the Original Arrays are -" << endl;
    printArr(arr, m);
    printArr(err, n);
    comEl(arr, m, err, n);
    return 0;
}