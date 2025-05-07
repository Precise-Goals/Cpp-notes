#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int r, h;
    cout << "Enter the Radius of Cone: ";
    cin >> r;
    cout << "Enter the height of Cone: ";
    cin >> h;

    cout << "The volume of cone: " << (1.0 / 3.0) * M_PI * r * r * h;
    return 0;
}