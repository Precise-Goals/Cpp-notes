#include <iostream>
using namespace std;
int main()
{
    float f;
    cout << "Enter the temperature in faranheit: ";
    cin >> f;
    cout << "The Temperature in Celcius: " << (f - 32) * (5.0 / 9.0);
    return 0;
}