#include <iostream>

using namespace std;
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < sizeof(arr) / 4; i++) {
        for (int j = i; j <= (sizeof(arr) / 4) - 1; j++) {
            for (int k = i; k <= j; k++) {
                cout << arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
// maximum subarray sum
// subarray is continuous parts
// subarrays of {1,2,3,4,5}
// 1,2,3,4,5
// 12,23,34,45
// 123,234,345
// 1234,2345
// 12345
// 5*6/2 = 15
// required start and end part
// start always from 0th index
// end - start to n-1
// total subarrays = n(n+1)/2