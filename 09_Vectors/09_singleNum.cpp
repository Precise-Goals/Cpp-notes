#include <iostream>
#include <vector>
using namespace std;
int Unique(vector<int> unio)
{
    int unique = 0;
    for (int i : unio) {
        unique ^= i;
    }
    return unique;
}
int priVec(vector<int> vec)
{
    for (int i : vec) {
        cout << i << " ";
    }
    return 0;
}
int main()
{
    vector<int> unio = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
    priVec(unio);
    cout << "The unique number is " << Unique(unio) << endl;
    return 0;
}

// n ^ n = 0
// n ^ 0 = n