#include <iostream>

using namespace std;
float imp(int r)
{
    return r * 0.621371;
}
int main()
{
    int r;
    cout << "Enter the speed in km/ph: ";
    cin >> r;
    cout << "The speed in M/ph: " << imp(r);
    return 0;
}