#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    cout << "The lowercase character: " << ch<<endl;
    cout << "The Uppercase character: " << (char)(ch - 32);
    return 0;
}