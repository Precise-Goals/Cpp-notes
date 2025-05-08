#include <iostream>

using namespace std;
bool isleap(int a)
{
    if (a % 400 == 0) {
        return true;
    }
    if (a % 100 == 0) {
        return false;
    }
    if (a % 4 == 0) {
        return true;
    }

    return false;
}
int main()
{
    int y1, y2;
    cout << "Enter the year 1: ";
    cin >> y1;
    cout << "Enter the year 2: ";
    cin >> y2;

    for (int i = y1; i <= y2; i++) {
        if (isleap(i)) {
            cout << i << " ";
        }
    }
    return 0;
}