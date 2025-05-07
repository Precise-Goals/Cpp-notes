#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int priVec(vector<int> vec)
{
    for (int i : vec) {
        cout << i << " ";
    }
    return 0;
}
int main()
{
    // we need sorted array to perform the binary search
    vector<int> camp = { 34, 32, 57, 54, 78, 66 };
    sort(camp.begin(), camp.end());
    int n = camp.size();
    int lower = 0, f = 0, upper = n;
    int target;
    priVec(camp);
    cout << endl;
    cout << "Enter the Searching element ";
    cin >> target;
    while (lower <= upper) {
        int mid = (lower + upper) / 2;
        if (camp[mid] == target) {
            f = 1;
            cout << "Search Found at " << mid + 1 << " position" << endl;
            break;
        }
        if (camp[mid] < target) {
            lower = mid + 1;
        } else {
            upper = mid - 1;
        }
    }
    if (!f) {
        cout << "Search Cannot be found" << endl;
    }

    return 0;
}