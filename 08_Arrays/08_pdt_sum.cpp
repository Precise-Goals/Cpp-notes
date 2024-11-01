#include <iostream>
using namespace std;
int printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int sumArr(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int mulArr(int arr[], int n)
{
    unsigned long int mul = 1;
    for (int i = 0; i < n; i++) {
        mul *= arr[i];
    }
    return mul;
}
int main()
{
    // to calculate the sum and product of all numbers in array
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "Original Array is ";
    printArr(arr, (sizeof(arr) / 4));
    cout << "Summation of Array elements : " << sumArr(arr, (sizeof(arr) / 4)) << endl;
    cout << "Multiplication of Array elements : " << mulArr(arr, (sizeof(arr) / 4)) << endl;
    return 0;
}