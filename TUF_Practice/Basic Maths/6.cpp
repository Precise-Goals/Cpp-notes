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
        if (a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
    }
    cout << "GCD of Both Numbers: " << gcd;

    return 0;
}

// Euclidean Algorithm
/*
    usually it means Gcd(a,b) = Gcd(a-b,b)
    when a>b;

*/