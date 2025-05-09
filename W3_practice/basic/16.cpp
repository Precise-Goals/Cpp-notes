#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    if (n > 0) {
        cout << "positive";
    } else if (n == 0) {
        cout << "zero";
    } else {
        cout << "negative";
    }
    return 0;
}