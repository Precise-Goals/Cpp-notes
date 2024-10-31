#include <iostream>
#include <math.h>
using namespace std;
bool checkPrime(int n)
{
    bool alpha = false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            alpha = true;
        }
        return alpha;
    }
}
int printPrime(int n)
{
    for (int i = 2; i < n; i++) {
        if (checkPrime(i) == 0) {
            cout << " " << i << " ";
        }
    }
}

int Fibo(int n)
{
    int fi = 0, fo = 1, fifo;
    cout<<"0 ";
    for (int i = 0; i <= n; i++) {
        fifo = fi + fo;
        fo = fi;
        fi = fifo;
        cout<<fifo<<" ";
    }
    return 0;
}
int main()
{
    // check Prime
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    if (checkPrime(n)) {
        cout << "Number is composite" << endl;
    } else {
        cout << "Number is prime" << endl;
    }

    // print all prime numbers till n
    cout << "all prime numbers till " << n << " : ";
    printPrime(n);
    cout << endl;

    // Fibonacci
    cout << "Fibonacci series of " << n << " is ";
    Fibo(n);

    return 0;
}