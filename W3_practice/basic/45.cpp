#include <iostream>

using namespace std;
int main()
{
    string samp, nw, od;
    getline(cin, samp);
    cout << "Enter the word to change: ";
    cin >> od;
    cout << "Enter the word to which it should change: ";
    cin >> nw;

    cout << "original text: " << samp << endl;
    for (int i = 0; i < (int)samp.size(); i++) {
        string key = samp.substr(i, (int)od.size());
        if (key == od) {
            for (int k = 0; k < (int)od.size(); k++) {
                samp[i + k] = nw[k];
            }
        }
    }
    cout << "formatted text: " << samp << endl;
    return 0;
}