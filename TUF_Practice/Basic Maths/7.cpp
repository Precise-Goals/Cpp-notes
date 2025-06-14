#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main()
{
    int a, f = 0;
    cout << "Enter the Number: ";
    cin >> a;
    for (int i = 2; i < sqrt(a); i++) {
        if (a % i == 0) {
            f = 1;
            break;
        }
    }
    if (f == 1) {
        cout << "Number is Not a Prime Number" << endl;
    } else {
        cout << "Number is a Prime Number" << endl;
    }

    return 0;
}