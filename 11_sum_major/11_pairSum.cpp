#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> vect, int target) // O(n)
{
    int i = 0, j = vect.size() - 1;
    vector<int> ans;
    while (i < j) {
        int ps = vect[i] + vect[j];
        if (ps < target) {
            i++;
        } else if (ps > target) {
            j--;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main()
{
    // pairSum we have sorted array in ascending
    // target sum
    // bruteforce == convectional methods
    vector<int> vec = { 5, 6, 7, 8 };
    int target = 15;
    cout << "The pairs at " << pairSum(vec, target)[0] << ", " << pairSum(vec, target)[1] << endl;
    return 0;
}
// vector<int> pairSum(vector<int> vect, int target)
// {
// vector<int> vec;
//    bruteforce o{n^2}
// for (int i = 0; i < vect.size(); i++) {
// for (int j = i + 1; j < vect.size(); j++) {
// if (vect[i] + vect[j] == target) {
// vec.push_back(i);
// vec.push_back(j);
// }
// }
// }
// return vec;
// }