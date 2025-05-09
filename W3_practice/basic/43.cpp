#include <iostream>

using namespace std;
int main()
{
    string sample = "There are 12 chairs, 15 desks, 1 blackboard and 2 fans.";
    bool in = false;
    int sum = 0, n = 0;
    for (char i : sample) {
        if (isdigit(i)) {
            n = 10 * n + (i - '0');
            in = true;
        } else {
            sum += n;
            n = 0;
            in = false;
        }
    }
    if (in) {
        sum += n;
    }
    cout << "Output: " << sum << endl;

    return 0;
}