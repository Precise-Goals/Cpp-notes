// heron's formula
// s = (a+b+c)/2
// A = sqrt(s(s-a)(s-b)(s-c))
#include <iostream>
#include <math.h>

using namespace std;

float Semi(int a, int b, int c)
{
    return (a + b + c) / 2.0;
}

float Area(int a, int b, int c, float semip)
{
    int s = semip * semip;
    return sqrt(semip * (semip - a) * (semip - b) * (semip - c));
}

int main()
{
    int a[3];
    cout << "Enter the first side of triangle: ";
    cin >> a[0];
    cout << "Enter the second side of triangle: ";
    cin >> a[1];
    cout << "Enter the third side of triangle: ";
    cin >> a[2];

    float semip = Semi(a[0], a[1], a[2]);
    cout << "The semiperimeter of Triangle is: " << semip << endl;
    cout << "The Area of Triangle is: " << Area(a[0], a[1], a[2], semip) << endl;

    return 0;
}