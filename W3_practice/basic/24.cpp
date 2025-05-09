#include <iostream>
#include <math.h>
// n * s^2 / (4 * tan(π / n))
using namespace std;
int main()
{
    int l, n;
    cout << "Enter the Number of sides: ";
    cin >> n;
    cout << "Enter the length of each side: ";
    cin >> l;
    cout << "The area of polygon with " << n << " sides is " << (0.25 * n * pow(l, 2)) * atan(M_PI / n) << endl;
    return 0;
}