#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n1, n2, digs = 0;
    cout << "Enter the Number: ";
    cin >> n1 >> n2;
    int s = (n1 + n2);
    cout << "The sum is " << s << endl;
    cout << "The Length of sum is " << (int)log10(s) + 1 << endl;
    while (s != 0) {
        digs++;
        s /= 10;
    }

    cout << "The Length of sum is " << digs << endl;

    return 0;
}