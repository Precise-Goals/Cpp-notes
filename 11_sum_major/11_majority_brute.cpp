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
int majorityElement(vector<int>& n)
{
    // bruteforce approach pretty convecntional way
    int count = 0;
    for (int el : n) {
        for (int ol : n) {
            if (ol == el) {
                count++;
            }
            if (count > (n.size() / 2)) {
                return el;
            }
        }
        count = 0;
    }
    return 0;
}
int main()
{
    // majority by bruteforce approach O(n^2)
    vector<int> arr = { 3, 3, 4 };

    cout << "Given Array is ";
    priVec(arr);
    cout << endl;
    cout << "The Majority Element is : " << majorityElement(arr) << endl;

    return 0;
}