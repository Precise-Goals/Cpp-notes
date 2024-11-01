#include <iostream>
using namespace std;
int btd(long int a)
{
    int rem, pow = 1; // 2^0
    int sum = 0;
    while (a > 0) {
        rem = a % 10;
        a /= 10;
        sum += rem * pow;
        pow *= 2;
        cout << rem << endl;
    }
    return sum;
}
int main()
{
    long int n = 101001;
    cout << "Conversion of " << n << " to Decimal is " << btd(n);
    return 0;
}

// common numbers odd number have 1 in their least significant bit
// 1 + 1 = 10;