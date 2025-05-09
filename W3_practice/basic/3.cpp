#include <iostream>
#include <math.h>

using namespace std;

float Vol(int r, int h)
{
    return h * M_PI * (pow(r, 2));
}

int main()
{
    int r, h;
    cout << "Enter the Radius of cylinder: ";
    cin >> r;
    cout << "Enter the height of cylinder: ";
    cin >> h;
    cout << "The Volume of Cylinder is : " << Vol(r, h);
    return 0;
}