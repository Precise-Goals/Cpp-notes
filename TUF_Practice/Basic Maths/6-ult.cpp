#include <iostream>

using namespace std;
int main()
{
    int a, b, gcd;
    cout << "Enter the Number 1: ";
    cin >> a;
    cout << "Enter the Number 2: ";
    cin >> b;
    for (int i = min(a, b); i > 0; i--) {
        if (((a - b) % i == 0) && (b % i == 0)) {
            gcd = i;
            break;
        }
    }
    cout << "The GCD of Both Numbers: " << gcd << endl;

    return 0;
}

/*
if a>b, gcd(a,b) = gcd(a-b,b) = gcd(a-2b,b)...soo on untill a<b
    then gcd(a,b) = gcd(a % b,b)
    while gcd(greater,smaller) = gcd(greater % smaller,smaller)
    => TL = O(log phi (min(a,b)))
*/