#include <iostream>
using namespace std;
int main()
{
    int arr[5] = { 51, 3, -12, -45, 100 };
    int smallest = INT8_MAX; // +infinity
    int largest = INT8_MIN; // -infinity
    int locSmall, locLarge;
    cout << "Given Array : ";
    for (int i = 0; i < sizeof(arr) / 4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < sizeof(arr) / 4; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            locSmall = i;
        }
    }
    cout << "Smallest in array at " << locSmall + 1 << " postion : " << smallest << endl;
    for (int i = 0; i < sizeof(arr) / 4; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            locLarge = i;
        }
    }
    cout << "Largest in array at " << locLarge + 1 << " position : " << largest << endl;

    return 0;
}