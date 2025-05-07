#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the Elements: ";
    for (int& i : a) {
        cin >> i;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }

    return 0;
}