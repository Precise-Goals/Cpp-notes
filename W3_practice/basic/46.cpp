#include <iostream>

using namespace std;
int main()
{
    int n, h = 0, m = 0;
    cout << "Enter the number: ";
    cin >> n;
    while (n != 0) {
        if (n > 60) {
            h++;
            n -= 60;
        } else if (n < 60) {
            m++;
            n -= 1;
        }
    }
    cout << "Time in conventions: " << h << " : " << m << endl;
    return 0;   
}