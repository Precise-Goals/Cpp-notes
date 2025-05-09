#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int qn = 0, qp, tbill = 0;
    float p;
    int co = 0;
    cout << "Checkout Details, write 'done' after adding (quantity price): ";
    while (cin >> qp >> p) {
        tbill += qp * p;
        co += qp;
        qn++;
    }

    cout << "The total Bill amount is " << tbill << endl;
    cout << "The Total average is " << co / (float)qn << endl;

    return 0;
}