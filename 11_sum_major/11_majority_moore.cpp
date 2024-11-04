#include <iostream>
#include <vector>
using namespace std;

int priVec(const vector<int>& vec) {
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

int major(vector<int>& n) {
    // Best method O(n)
    int c = 0, a = 0;
    for (int i = 0; i < n.size(); i++) {
        if (c == 0) {
            a = n[i];
        }
        c += (a == n[i]) ? 1 : -1;
    }
    
    // Verification step to ensure 'a' is truly the majority element
    int p = 0;
    for (int i : n) {
        if (i == a) {
            p++;
        }
    }
    return (p > n.size() / 2) ? a : -1;
}

int main() {
    vector<int> a = { 1, 2, 2, 1, 2 };
    cout << "Given Vector: ";
    priVec(a);
    cout << "The Majority Element is: " << major(a) << endl;
    return 0;
}
