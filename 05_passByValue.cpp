#include <iostream>
using namespace std;
int mul(int a, int b)
{
    a += 15;
    b += 15;
    return a * b;
}
int sum(int u)
{
    int sum = 0, i = u, m = 10, mu = 1, dig;
    while (i > 0) {
        dig = (i % m);
        i -= dig;
        dig /= mu;
        sum += dig;
        m *= 10;
        mu *= 10;
    }
    return sum;
}
int findDigit(int o) // teacher method
{
    int sum = 0;
    while (o > 0) {
        int lastDig = o % 10;
        o /= 10;
        sum += lastDig;
    }
    return sum;
}
int main()
{
    int x, y;
    x = 10;
    y = 15;

    // pass by value

    cout << x << " " << y << endl;
    cout << "Multiplication is " << mul(x, y) << endl;
    cout << "Sum of digits is " << sum(121213)<<endl;
    cout << "Sum of digits(teacher's method) is " << findDigit(121213)<<endl;
    // Direct copy of values are passed onto the function

    return 0;
}