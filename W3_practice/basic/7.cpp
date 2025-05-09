#include <iostream>
using namespace std;
int main()
{
    float c;
    cout << "Enter the Temperature in Celcius: ";
    cin >> c;
    cout << "The Temperature in Faranheit: " << ((9 / 5.0) * c) + 32.0;
    return 0;
}