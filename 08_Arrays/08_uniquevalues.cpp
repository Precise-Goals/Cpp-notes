#include <iostream>
using namespace std;
int printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int Unique(int arr[], int n)
{
    int Unique = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (arr[i] == arr[j]) {
                Unique = arr[i];
            }
        }
    }
    return Unique;
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 1, 2, 3, 4, 5 };
    cout << "Original Array is ";
    printArr(arr, (sizeof(arr) / 4));
    cout << "Unique number is " << Unique(arr, (sizeof(arr) / 4))    << endl;
    return 0;
}