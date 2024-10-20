#include <iostream>
using namespace std;
int main()
{
    // triangle pattern
    int i, j, n = 5;
    char ch = 'A';
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << " * ";
        }
        cout << endl;
    }
    i = j = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << ch;
        }
        ch += 1;
        cout << endl;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    // reverese triangle pattern
    for (i = 1; i <= n; i++) {
        for (j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    // floyd triangle pattern
    int k = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << " " << k << " ";
            k += 1;
        }
        cout << endl;
    }
    // inverted triangle pattern (right sider)
    for (i = 0; i < n; i++) {
        for (k = 0; k <= i; k++) {
            cout << " ";
        }
        for (j = 0; j < n - i; j++) {
            cout << i + 1;
        }
        // for (j = n; j > i; j--)  this logic is allowed too
        cout << endl;
    }
    // Pyramind pattern
    int l;
    for (i = 0; i < n; i++) {
        for (k = 1; k < n - i; k++) {
            cout << "   "; // thats why we need three spaces for formatting
        }
        for (k = 0; k <= i; k++) {
            cout << " " << k + 1 << " "; // three characters for formatting
        }
        for (k = i; k >= 1; k--) {
            cout << " " << k << " "; // three characters for formatting
        }
        cout << endl;
    }
    // hollow diamond pattern
    l = 4;
    for (i = 0; i < l; i++) {
        for (j = 0; j < l - i; j++) {
            cout << "   ";
        }
        cout << " * ";
        if (i != 0) {
            for (j = 0; j < (2 * i) - 1; j++) {
                cout << "   ";
            }
            cout << " * ";
        }

        cout << endl;
    }
    for (i = 0; i < l - 1; i++) {
        for (j = 0; j < i + 2; j++) {
            cout << "   ";
        }
        cout << " * ";
        if (i != l - 2) {
            for (j = 0; j < 2 * (l - i) - 5; j++) {
                cout << "   ";
            }
            cout << " * ";
        }

        cout << endl;
    }
    // butterfly pattern
    // top
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            cout << " * ";
        }
        for (j = 0; j < 2 * (n - i) - 2; j++) {
            cout << "   ";
        }
        for (j = 0; j <= i; j++) {
            cout << " * ";
        }

        cout << endl;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            cout << " * ";
        }
        for (j = 0; j < 2 * i; j++) {
            cout << "   ";
        }
        for (j = 0; j < n - i; j++) {
            cout << " * ";
        }

        cout << endl;
    }

    return 0;
}