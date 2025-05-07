#include <cmath>
#include <iostream>

using namespace std;
bool isp(int a)
{
    if (a < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(a); ++i) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Highest Twin prime numbers are: ";
    for (int i = n - 2; i >= 0; i--) {
        if (isp(i) && isp(i + 2)) {
            cout << "(" << i << ", " << i + 2 << ")" << endl;
            break;
        }
    }
    cout << "Shortest Twin prime numbers are: " << endl;
    for (int i = 2; i < n - 2; i++) {
        if (isp(i) && isp(i + 2)) {
            cout << "(" << i << ", " << i + 2 << ")" << endl;
            break;
        }
    }

    return 0;
}