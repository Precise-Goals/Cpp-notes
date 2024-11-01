#include <iostream>
using namespace std;
int linearSearch(int e[], int n, int trgt)
{
    for (int i = 0; i < n; i++) {
        if (e[i] == trgt) {
            cout << "The Number " << trgt << " is found at position " << i + 1 << endl;
            break;
        }
    }
}
int main()
{
    int sr, arr[8] = { 54, 12, 5, 75, 34, 24, 9, 8 };
    cout << "Array is ";
    for (int i = 0; i < sizeof(arr) / 4; i++) {
        cout << arr[i] << " ";
    }

    cout << endl
         << "The Number to Search : ";
    cin >> sr;
    linearSearch(arr, sizeof(arr) / 4, sr);

    return 0;
}