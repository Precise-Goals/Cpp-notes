#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1) {
        return 1;
    }

    return n * fact(n - 1);
}
int facto(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++) {
        fact *= i;
    }
    return fact;
}

int Combinational(int a, int b)
{
    return fact(a) / (fact(b) * fact(a - b));
}
int main()
{
    int n, r;
    cout << "Total number of Elements (n) : ";
    cin >> n;
    cout << "Wanted Selection of Elements (r) : ";
    cin >> r;
    if (n > r) {
        cout << "Number of Possible selections are " << Combinational(n, r) << endl;
        cout << "Factorial of 6 is " << fact(6) << endl;
        cout << "Factorial of 6 is " << facto(6) << endl;
        return 0;
    } else {
        cout << "Total Number of Elements must be greater than Wanted" << endl;
        return 0;
    }
}

// nCr = n!/r!(n-r)!