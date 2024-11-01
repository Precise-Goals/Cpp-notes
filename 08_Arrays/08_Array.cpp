#include <iostream>
using namespace std;
int main()
{
    // 1st Data Structure
    // Linear and Hierarchial
    // Algorithms are operations on data structure performed optimally
    // to store the Data and handle it

    // Array
    //  same typeof data
    //  linear data type
    //  contigupous in memory location
    int marks[5];
    int mr[5] = { 66, 89, 54, 79, 99 };
    int arr[5];
    float price[] = { 31.54, 64.43, 75.34 };

    /*
        To access at any location in array we have index of an element starts from 0 to n-1 if n is size of array
    */
    cout << mr[4] << endl;
    cout << mr[2] << endl;

    cout << "size of price array is " << sizeof(price); // get the size of memory
    cout << "size of price array is " << sizeof(price) / 4; // space type of datatype; // get the size of array

    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << mr[i] << endl;
    }
    for (int i = 0; i < sizeof(arr) / 4; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << arr[i];
    }

    return 0;
}