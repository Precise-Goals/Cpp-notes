#include <iostream>
using namespace std;
int main()
{
    float a;
    scanf("%f", &a);
    int mid = ((a - 1) / 2);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (mid + i == j || mid - i == j || mid == i) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}