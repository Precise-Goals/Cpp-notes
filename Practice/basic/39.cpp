#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the amount of data: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the data: ";
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
    cout << "Sorted Data: ";
    for (int i : nums) {
        cout << i << " ";
    }
    cout << endl;
    cout << "The max and min Difference of Data: " << nums[n - 1] - nums[0] << endl;

    return 0;
}