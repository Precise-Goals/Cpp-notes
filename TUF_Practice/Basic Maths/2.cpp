// count number of digits
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int countl = (int)(log10(n) + 1);
    for (n; n != 0; count++) {
        cout << n % 10 << endl;
        n /= 10;
    }
    cout << count << endl;
    cout << countl << endl;
    return 0;
}

// completxity O(log10(n))