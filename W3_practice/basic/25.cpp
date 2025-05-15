#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    float x1, x2, y1, y2;
    cout << "Enter the Latitude of Coord 1: ";
    cin >> x1;
    cout << "Enter the Longitude of Coord 1: ";
    cin >> y1;
    cout << "Enter the Latitude of Coord 2: ";
    cin >> x2;
    cout << "Enter the Longitude of Coord 2: ";
    cin >> y2;
    float r = M_PI / 180;
    x1 *= r;
    x2 *= r;
    y1 *= r;
    y2 *= r;

    float Rad = 6371.01;
    float dist = Rad * acos((sin(x1) * sin(x2) + (cos(x1) * cos(x2) * cos(y1 - y2))));

    cout << "The distance between two points " << dist << endl;
    return 0;
}