#include <iostream>
using namespace std;
int swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
void Reverse(int arr[], int n)
{
    int a = 0, b = n - 1;
    while (a < b) {
        swap(arr[a], arr[b]);
        a++;
        b--;
    }
    cout << "Reversed Array is ";
    printArr(arr, n);
}

int main()
{
    int arr[] = { 23, 13, 43, 66, 36, 86, 90 };
    cout << "Original Array is ";
    printArr(arr, (sizeof(arr) / 4));
    cout << endl;
    Reverse(arr, sizeof(arr) / 4);

    return 0;
}