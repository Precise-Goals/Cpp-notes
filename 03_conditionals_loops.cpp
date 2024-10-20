#include <iostream>
using namespace std;
int main()
{
    // if else
    // if - else if - else
    // lowercase or uppercase
    char n;
    cout << "enter character: ";
    cin >> n;
    // A  = 65 and Z = 90
    if ((n >= 65) && (n <= 90)) {
        // implicit type conversion
        cout << "Character is uppercase" << endl;
    } else {
        cout << "Character is lowercase" << endl;
    }

    // ternary statement
    int h = 0;
    !h == 0 ? cout << "False" << endl : cout << "True" << endl;
    int count = 1;
    while (count <= 10) {
        cout << count * 2 << endl;
        count++;
    }
    for (int j = 1; j <= 5; j++) {
        cout << j * 5 << endl;
    }
    int m, sum = 0;
    cout<<"Enter the Number: "<<endl;
    cin>>m;
    for (int k = 1; k <= m; k++) {
        sum += k;
    }
    cout << sum << endl;

    return 0;
}