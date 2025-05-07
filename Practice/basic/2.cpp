#include <iostream>
#include <math.h>

using namespace std;

float Vol(int l)
{
    return pow(l, 3);
}

int main()
{
    int r;
    cout << "Enter the Side of Cube :  ";
    cin >> r;
    cout << "The Volume of Cube is : " << Vol(r);
    return 0;
}