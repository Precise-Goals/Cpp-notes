// reverse the number
#include <iostream>

using namespace std;
int main()
{
    int n, am = 0;
    cin >> n;
    cout << n << endl;
    while (n != 0) {
        am = (am * 10) + (n % 10);
        n /= 10;
    }

    cout << am << endl;
    return 0;
}