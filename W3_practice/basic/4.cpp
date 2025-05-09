#include <iostream>
#include <math.h>
using namespace std;

float perimeter(int b, int h)
{
    return 2 * (b + h);
}
float area(int b, int h)
{
    return b * h;
}

int main()
{
    int a[2];
    cout << "Enter the Height: ";
    cin >> a[0];
    cout << "Enter the Breadth: ";
    cin >> a[1];

    cout << "The Area of Rectangle is: " << area(a[0], a[1]) << endl;
    cout << "The Perimeter of Rectangle is: " << perimeter(a[0], a[1]) << endl;

    return 0;
}