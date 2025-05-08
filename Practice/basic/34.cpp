#include <iostream>
#include <math.h>

int cons(int x1, int y1, int a, int b)
{
    return pow(x1, 2) - pow(a, 2) + pow(y1, 2) - pow(b, 2);
}
int arbi(int a, int b)
{
    return 2 * (a - b);
}
using namespace std;
int main()
{
    int a, b, c, x1, x2, x3, y1, y2, y3;
    cout << "Enter the length of 3 sides a, b, c: ";
    cin >> a >> b >> c;
    cout << "Enter the coordinates of vertex 1 (x1,y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of vertex 2 (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of vertex 1 (x3,y3): ";
    cin >> x3 >> y3;

    float Rad = (a * b * c) / sqrt((a + b + c) * (b + c - a) * (a + b - c) * (a + c - b));
    int cons1 = cons(x1, y1, x2, y2);
    int cons2 = cons(x1, y1, x3, y3);
    int a1 = arbi(x1, x2);
    int a2 = arbi(x1, x3);
    int b1 = arbi(y1, y2);
    int b2 = arbi(y1, y3);

    float d = (a1 * b2) - (b1 * a2);
    float x = ((b1 * cons2) - (cons1 * b2)) / d;
    float y = ((a1 * cons2) - (cons1 * a2)) / d;

    cout << "The Radius of Circle is :" << Rad << endl;
    cout << "The Centre Coordinate of Circle is (x, y): " << "(" << x << ", " << y << ")" << endl;
    return 0;
}