#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int s;
    cout << "Enter the side of Equilateral triangle: ";
    cin >> s;
    cout << "The area of Equilateral triangle is: " << 0.5 * pow(s, 2) * sin(M_PI / 3.0) << endl;
    return 0;
}