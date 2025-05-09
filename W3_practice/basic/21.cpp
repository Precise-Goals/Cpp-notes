#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the nth term: ";
    cin >> n;
    int osum = 0;
    int esum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            osum += i;
        } else {
            esum += i;
        }
    }
    cout<<"The Sum of Odd numbers from series: "<<osum<<endl;
    cout<<"The Sum of Even numbers from series: "<<esum<<endl;

    return 0;
}