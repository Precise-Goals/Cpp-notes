#include <iostream>

using namespace std;
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int maxSum = 0;
    for (int st = 0; st < sizeof(arr) / 4; st++) {
        int currSum = 0;
        for (int ed = st; ed <= (sizeof(arr) / 4) - 1; ed++) {
            currSum += arr[ed];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Maximum Subarray sum is " << maxSum << endl;
    return 0;
}