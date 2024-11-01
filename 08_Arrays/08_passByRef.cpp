#include <iostream>
using namespace std;
void changeArray(int n[], int s)
{
    cout << "In Function: ";
    for (int i = 0; i < s; i++) {
        n[i] = 2 * n[i];
        cout << n[i] << " ";
    }
}
int main()
{
    int i[5] = { 67, 61, 98, 62, 33 };
    /*
        Array is non primitive Data type
        can be access original value unlike passByValue
    */
    changeArray(i, 5);
 // elements changed in function due to array using pass by reference
 // function dont create copy, it performs changes in original
    cout << "In Main Program: ";
    for (int u = 0; u < sizeof(i) / 4; u++) {
        i[u] = 2 * i[u];
        cout << i[u] << " ";
    }

    return 0;
}