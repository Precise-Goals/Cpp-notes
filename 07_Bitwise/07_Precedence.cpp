#include <iostream>
using namespace std;
int main()
{
    cout << 4 * 5 % 2<<endl;
    cout << 5 * 9 % 6 / (12 > 7);
    return 0;
}
/*
    precedence
    1. Unary !,+,-   R  to  L
    2. Arithmetic *,/,%   L  to  R
    3. Arithmetic +,-   L  to  R
    4. Relational <,<=,>,>=   L  to  R
    5. Relational ==, !=   L  to  R
    6. AND &&   L  to  R
    7. OR ||   L  to  R
    8. Assignment = R to L
*/