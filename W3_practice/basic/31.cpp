#include <iostream>

using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter the first side: ";
    cin >> a;
    cout << "Enter the second side: ";
    cin >> b;
    cout << "Enter the third side: ";
    cin >> c;

    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        cout << "Its the right angled triangle";
    } else {
        cout << "Its not right angled triangle";
    }

    return 0;
}