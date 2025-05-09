#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(7);
    for (int& i : a) {
        cin >> i;
    }

    for (int i = 0; i < 7 - 1; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i : a) {
        cout << i <<" ";
    }

    return 0;
}