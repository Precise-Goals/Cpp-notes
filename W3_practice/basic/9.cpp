#include <iostream>
using namespace std;
int main()
{
    float a1, a2;
    cout << "Enter the First angle of traingle: ";
    cin >> a1;
    cout << "Enter the Second angle of traingle: ";
    cin >> a2;

    cout << "The Third Angle of Triangle is: " << 180 - a1 - a2;
    return 0;
}