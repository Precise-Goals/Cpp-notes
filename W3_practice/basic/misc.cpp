#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    // ham 2 se n tak loop chalaenga har no check karenge
    for (int i = 2; i <= n; i++) {
        // har number jo check hoga uska sum start mein 1
        int sum = 1;
        // check number jo range mein divisible
        // ho current number i se
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                // jab bhi divisible ho sum mein add karo
                sum += j;
            }
        }
        // check karo sum of divisors == i ?
        if (sum == i) {
            // if yes print that ;)
            cout << i << " ";
        }
    }

    return 0;
}