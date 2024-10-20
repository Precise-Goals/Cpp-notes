#include <iostream>
using namespace std;
int main()
{
    int i, k, n = 4, j;
    char ch = 'A';
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << " " << j;
        }
        cout << endl;
        j = 1;
    }
    i = 1;
    j = 1;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << " * ";
        }
        cout << endl;
        j = 1;
    }
    i = 1;
    j = 1;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << " " << ch;
            ch = ch + 1;
        }
        ch = 65;
        cout << endl;
        j = 1;
    }
    i = 1;
    j = 1;
    k = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= n - 1; j++)
        {
            cout << " " << k;
            k += 1;
        }
        cout << endl;
        j = 1;
    }
    i = 1;
    j = 1;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << " " << ch;
            ch = ch + 1;
        }
        cout << endl;
        j = 1;
    }

    return 0;
}
