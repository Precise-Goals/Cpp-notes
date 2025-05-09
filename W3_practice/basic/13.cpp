#include <iostream>

using namespace std;
int main()
{
    int divi, div;
    cout << "Enter the Dividend: ";
    cin >> divi;
    cout << "Enter the Divisor: ";
    cin >> div;

    cout << "The Quotient obtained from division: " << divi / div << endl;
    cout << "The Remainder obtained from division: " << divi % div << endl;
    return 0;
}