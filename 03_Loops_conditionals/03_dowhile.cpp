#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isPrime = true;
    cout << "Enter the Number:  ";
    cin >> n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
        } else {
            isPrime = true;
        }
    }

    if (isPrime) {
        cout << "Number is not Prime" << endl;
    } else {
        cout << "Number is Prime" << endl;
    }
    return 0;
}