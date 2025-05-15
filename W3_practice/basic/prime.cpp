#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    bool isPrime = true;
    cout << "Enter any Number: ";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Prime Number";
    } else {
        cout << "Not a Prime Number";
    }

    return 0;
}