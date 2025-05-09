#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
bool isp(int a)
{
    if (a <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0, numb = 2, co = 0;
    cout << "The list of Prime Numbers: ";
    while (co < n) {
        if (isp(numb)) {
            cout << numb << " ";
            sum += numb;
            co++;
        }
        numb++;
    }

    cout << endl
         << "The Sum of first " << n << " prime numbers is " << sum;
    return 0;
}