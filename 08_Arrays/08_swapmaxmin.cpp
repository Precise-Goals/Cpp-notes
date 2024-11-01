#include <iostream>
using namespace std;
int printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int maxMin(int arr[], int n)
{
    int max = INT8_MIN, ma;
    int min = INT8_MAX, mi;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            ma = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            mi = i;
        }
    }
    swap(arr[ma], arr[mi]);
    return 0;
}
int main()
{
    int arr[] = { 23, 13, 43, 66, 36, 86, 90 };
    cout << "Original Array is ";
    printArr(arr, (sizeof(arr) / 4));
    maxMin(arr, sizeof(arr) / 4);
    cout << "Minmax Swapped Array is ";
    printArr(arr, (sizeof(arr) / 4));

    return 0;
}