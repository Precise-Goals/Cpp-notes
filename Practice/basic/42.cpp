#include <iostream>

using namespace std;
int main()
{
    int coords[4][2];
    cout << "Check the Orthogonality via coordinates" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Enter the " << i + 1 << " coordinate form of (x y): ";
        cin >> coords[i][0] >> coords[i][1];
    }
    int yframe = ((coords[3][1] - coords[2][1]) * (coords[1][1] - coords[0][1]));
    int xframe = ((coords[3][0] - coords[2][0]) * (coords[1][0] - coords[0][0]));
    if (xframe + yframe == 0) {
        cout << "Yes, lines are orthogonal" << endl;
    } else {
        cout << "No, lines are not orthogonal" << endl;
    }

    return 0;
}