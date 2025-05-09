#include <iostream>

using namespace std;
int main()
{
    int p;
    float r, t;
    cout << "Enter the Principal amount: ";
    cin >> p;
    cout << "Enter the Rate of interest: ";
    cin >> r;
    cout << "Enter the time interval: ";
    cin >> t;

    cout << "The simple interest is " << (p * t * r) / 100.00 << endl;
    cout << "The Compound interest is " << ((p * t * r) / 100.00) + p << endl;
    return 0;
}