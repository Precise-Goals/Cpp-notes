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
int major(vector<int>& n)
{
    // Pretty optimise way than bruteforce
    int l = n.size();
    sort(n.begin(), n.end());
    int c = 1, a = n[0];
    if (l == 1) {
        return n[0];
    } else {
        for (int i = 1; i < l; i++) {
            if (n[i] == n[i - 1]) {
                c++;
            } else {
                c = 1;
                a = n[i];
            }
            if (c > l / 2) {
                return a;
            }
        }
    }
    return 0;
}
int main()
{
    vector<int> a = { 1, 2, 2, 1, 1 };
    cout << "Given Vector : ";
    priVec(a);
    cout << endl;
    cout << "The Majority element is : " << major(a) << endl;
    return 0;
}

// optimised way is
// 1.. sorting O(nlogn)
// 2. freq = 1 and and = arr[0] initiallisations + n

// O(nlogn)