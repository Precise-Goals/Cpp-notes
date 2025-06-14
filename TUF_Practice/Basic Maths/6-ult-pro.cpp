#include <iostream>

using namespace std;
int gcd(int a, int b)
{
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }

    if (a == 0) {
        return b;
    }
    return a;
}
int main()
{
    int a, b;
    cout << "Enter the Number 1: ";
    cin >> a;
    cout << "Enter the Number 2: ";
    cin >> b;
    cout << "The Gcd of Both Numbers: " << gcd(a, b) << endl;
    return 0;
}