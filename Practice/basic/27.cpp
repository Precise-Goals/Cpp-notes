#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, mul = 1, a;
    cout << "Enter the number:";
    cin >> n;
    int digs = (int)log10(n);
    int f = n / pow(10, digs);
    int l = n % 10;
    a = (n - (l) + f) - f * pow(10, digs) + l * (pow(10, digs));
    cout << a << endl;

    return 0;
}