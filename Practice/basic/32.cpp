#include <iostream>

using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        sum += i + 1;
    }
    cout << "The sum of first " << n << " numbers is " << sum << endl;
    return 0;
}