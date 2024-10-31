// bitwise & AND
// bitwise | Or
// bitwise ^ ExOr
//  / a = 8 and b = 5
//  then binary form of them a = 1000 and b = 0101
//  Operations
//  a & b = 0000
//  a | b = 1101
//  a ^ b = 1111
// bitwise left shift <<
//  if n = 4
//      n << i
/*
    4 -> 100
    <<  by 1
    1000
    number becomes double by shifting 1
    result = a * 2^b 
    for ex to four times the value of int n = 6 ie 110
    6<<2
    11000 = 24 = 6 * 2^2;     
*/
// bitwise right shift <<
//  if n = 20
//      n << i
/*
    20 -> 10100
    >>  by 1
    1010
    number becomes half by shifting 1
    result = a / 2^b 
    for ex to decrease by four times the value of int n = 20 ie 10100
    20>>2 
    00101 = 5 = 20 / 2^2;    
*/
#include <iostream>
using namespace std;
int main()
{
    cout << (10 << 1) << endl;
    cout << (10 >> 1) << endl;
    cout << (10 >> 2) << endl;
    cout << (10 << 6) << endl;
    return 0;
}