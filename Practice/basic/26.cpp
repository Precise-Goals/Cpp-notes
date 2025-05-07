#include <iostream>

using namespace std;
int main()
{
    int b1, b2;
    int i = 0, r = 0, sum[20];
    cout << "Enter the first Binary no: ";
    cin >> b1;
    cout << "Enter the second Binary no: ";
    cin >> b2;

    while (b1 != 0 || b2 != 0) {
        sum[i++] = (int)((b1 % 10 + b2 % 10 + r) % 2);
        r = (int)((b1 % 10 + b2 % 10 + r) / 2);
        b1 /= 10;
        b2 /= 10;
    }
    if (r != 0) {
        sum[i++] += r;
    }
    --i;
    cout << "The sum of two binary numbers is: ";
    while (i >= 0) {
        cout << (sum[i--]);
    }
    cout << ("\n");

    return 0;
}