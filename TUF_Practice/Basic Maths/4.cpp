// palindrome
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int rev(int n)
{
    int a = 0;
    while (n != 0) {
        a = (a * 10) + (n % 10);
        n /= 10;
    }

    return a;
}
int main()
{
    int n;
    cin >> n;
    if (n != rev(n)) {
        cout << "Number is not palindrome" << endl;
    } else {
        cout << "Number is Palindrome" << endl;
    }

    return 0;
}