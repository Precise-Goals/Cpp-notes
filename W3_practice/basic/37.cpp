#include <iostream>
#include <vector>
// Write a C++ program that reads a sequence of integers and prints the mode values of the sequence. The number of integers is greater than or equal to 1 and less than or equal to 100.
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number of Data: ";
    cin >> n;
    vector<int> nums(n, 0);

    for (int& i : nums) {
        cin >> i;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
    cout << "Sorted Inputted array: ";
    for (int i : nums) {
        cout << i << " ";
    }

    int crn = nums[0];
    int cx = 1;
    int mx = 1;
    int mode = 0;
    for (int i = 1; i < n; i++) {
        if (crn == nums[i]) {
            cx += 1;
        } else {
            cx = 1;
            crn = nums[i];
            continue;
        }
        if (cx > mx) {
            mx = cx;
            mode = crn;
        }
    }

    cout << endl
         << "The Mode of Data: " << mode
         << endl
         << "The occurance of mode: " << mx;
    return 0;
}