#include <iostream>

using namespace std;
float f(float a)
{
    return ((9.0 / 5.0) * a) + 32;
}
float kelc(int a)
{
    return a - 273.15;
}
int main()
{
    int k;
    cout << "Enter the Temperature in Kelvin: ";
    cin >> k;
    cout << "The Temperature in celsius: " << kelc(k) << endl;
    cout << "The Temperature in Faranheit: " << f(kelc(k)) << endl;
    return 0;
}