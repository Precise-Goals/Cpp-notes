#include <iostream>
using namespace std;
void fun()
{
    int u = 192;
}
int main()
{
    if (3 > 1) {
        int x = 10;
    }
    for (int i = 0; i < 100; i++) {
        int h = 12;
    }

    // cout << x; error: 'x' was not declared in this scope
    // cout << h; error: 'h' was not declared in this scope
    // cout << u; error: 'h' was not declared in this scope

    // Datatype modifiers
    cout << sizeof(int) << endl; //4
    cout << sizeof(long int) << endl; //4
    cout << sizeof(short int) << endl; //2
    cout << sizeof(long long int) << endl; //8
    cout << sizeof(signed int) << endl; //4
    cout << sizeof(unsigned int) << endl; //4

    return 0;
}

/*
    Scope
        Variable accessibilty
            1. Local Variables
                declared in if-else, Block of Code, Functions
                only accessible in certain block of code
            2. Global Variables
                declared outside of any block
                opening up way to access it anywhere in program by any functions/ block of code


*/

/*
    Data Type Modifiers change meaning of data types
        1. long
        2. short
        3. long long
        4. signed
        5. unsigned


        int has 4 bytes ie 32 bits
        32th bit for sign flag if used then  we have 31 bits to store the 2^31 numbers
        int range is [-2^31, 0] U [0, 2^31-1]


*/