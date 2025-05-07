#include <iostream>

using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Input the first two numbers: ";
    cin >> a >> b;
    cout << "Input the other two numbers: ";
    cin >> c >> d;

    cout << "The Total of four Numbers: " << a + b + c + d << endl;
    cout << "The Average of four Numbers: " << (a + b + c + d) / 4 << endl;
    return 0;
}