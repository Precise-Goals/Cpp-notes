#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    int x, y, z;
    cin >> t;
    while (t--) {
        cin >> x >> y >> z;
        bool f = false;
        for (int n = 0; n <= 100; n++) {
            if (n == x) {
                continue;
            }
            if ((abs(n - y) < abs(x - y)) && (abs(n - z) < abs(x - z))) {
                f = true;
                break;
            }
        }
        if (f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}