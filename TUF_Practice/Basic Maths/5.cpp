#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, am = 0;
    cin >> n;
    int c = (int)(log10(n) + 1);
    int tmp = n;
    while (n != 0) {
        am += pow((n % 10), 3);
        n /= 10;
    }
    cout << tmp << endl
         << am << endl;
    if (tmp == am) {
        cout << "Number is Armstrong";
    } else {
        cout << "Number is not Armstrong";
    }

    return 0;
}