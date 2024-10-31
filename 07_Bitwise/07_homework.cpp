#include <iostream>
using namespace std;
bool isPowerTwo(int n)
{
    if (n == 0)
        return false;
    while ((n & 1) == 0) {
        n = n >> 1;
    }
    return n == 1;
}
int dtb(int a)
{
    int ans = 0, pow = 1;
    while (a > 0) {
        int rem = a % 2;
        a /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}
int main()
{
    int n = 31;
    if (isPowerTwo(n)) {
        cout << "yes, Number is power of two" << endl;
    } else {
        cout << "No, Number is not power of two" << endl;
    }

    return 0;
}