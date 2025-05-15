#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
int main()
{
    vector<int> arr;
    int x;
    while (cin >> x) {
        arr.emplace_back(x);
    }

    for (int i : arr) {
        if (i == 51) {
            cout << "0" << endl;
        } else {
            cout << sqrt(pow(i - 51, 2)) * 3 << endl;
        }
    }

    return 0;
}