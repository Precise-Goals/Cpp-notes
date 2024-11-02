#include <iostream>

using namespace std;
int main()
{

    /*
        +ve + +ve = +ve;
        -ve + +VE = +ve;
        +ve + -VE = -ve;
    
    */

    // edge cases are thosee jo alag hatke hoti hai
    int arr[] = { 1, -2, 3, 4, -5, -9, 12 };
    int currSum = 0;
    int maxSum = INT8_MIN;
    // linear time

    for (int i = 0; i < sizeof(arr) / 4; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }
    cout << "Maximum Subarray sum is " << maxSum << endl;
    return 0;
}