#include <iostream>
using namespace std;
int main()
{
    int n = 1212, c = 0, i = 10;
    while (n > 0) {
        int rm = n % 10;
        c *= 10;
        c += rm;
        cout << rm << endl;
        n /= 10;
    }
    cout << c << endl;

    return 0;
}