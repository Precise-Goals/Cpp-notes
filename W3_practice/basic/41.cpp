#include <iostream>
#include <math.h>
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
    int n, count = 0;
    cout << "Enter an even number between 4 and 50000: ";
    cin >> n;

    if (n < 4 || n > 50000 || n % 2 != 0) {
        cout << "Please Enter the Even number between 4-500000" << endl;
        return main();
    }

    for (int i = 2; i <= n / 2; i++) {
        int j = n - i;
        if (isp(j) && isp(i)) {
            cout << i << " + " << j << " : " << n << endl;
            count++;
        }
    }

    cout << "There are " << count << " combinations possible" << endl;

    return 0;
}