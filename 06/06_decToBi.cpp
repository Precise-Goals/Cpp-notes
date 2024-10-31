#include <iostream>
using namespace std;
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
// 1011 = 1 * 1000 + 0 * 100 + 1 * 10 + 1*1;
int main()
{
    // binary 0/1 base 2
    // decimal number system 0-9 base 10
    // hexadecimal 0-f base 16
    // octadecimal 0-7 base 8

    // decimal to binary
    /*
        Remainders - R
           R    42---> ?
        ^  0    42/2 = 21
        |  1    21/2 = 10
        |  0    10/2 = 5
        |  1     5/2 = 2
        |  0     2/2 = 1
        |  1     1/2 = 0
            conversion to binary is (101010)2 = (42)10
    */

    /*
        (50)10 --> (?)2

      0  50/2 =25
      1  25/2 =12
      0  12/2 =6
      0  6/2 =3
      1  3/2 =1
      1  1/2 =0
                    (110010)2 = (50)10

    */
    int n = 89;
    cout << "Conversion of " << n << " to binary is " << dtb(n) << endl;
    cout << "Binary Numbers till 100" << endl;
    for (int i = 1; i < 10; i++) {
        cout << dtb(i) << "   "
             << dtb(i + 10) << "   "
             << dtb(i + 20) << "   "
             << dtb(i + 30) << "   "
             << dtb(i + 40) << "   " 
             << dtb(i + 50) << "   " 
             << dtb(i + 60) << "   " 
             << dtb(i + 70) << "   " 
             << dtb(i + 80) << "   " 
             << dtb(i + 90) << "   ";
        cout << endl;
    }

    return 0;
}