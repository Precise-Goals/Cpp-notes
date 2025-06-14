#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cout << "The Divisors with pairs are" << endl;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << " " << n / i << endl;
        }
    }

    return 0;
}