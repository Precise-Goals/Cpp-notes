#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int cc;
    int c = 0, sum = 0;
    cout << "Enter the Credit card number: ";
    cin >> cc;
    while (cc > 0) {
        c++;
        int dig = cc % 10;
        if (c % 2 == 0) {
            int dg = dig * 2;
            if (dg > 10) {
                while (dg > 0) {
                    int rm = dg % 10;
                    dg /= 10;
                    sum += rm;
                    cout << rm << endl;
                }
            } else {
                sum += dg;
            }
        } else {
            sum += dig;
        }
        cc /= 10;
    }
    cout << sum << endl;
    if (sum % 10 == 0) {
        cout << "Credit Card is Valid :)" << endl;
    } else {
        cout << "Invalid Credit Card :(" << endl;
    }

    return 0;
}