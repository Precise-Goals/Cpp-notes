#include <iostream>
using namespace std;
int main()
{
    // Decimal to Binary
    // if int n = 10 -->  1010
    /*
        1. convert the number to binary 1010
        2. sign flag of magnitude 01010
        3. 1s complement 0->1 and 1->0 10101
        4. add +1 10110
         hence, (-10)2 = (10110)2
         sign flag 1 for negative and 0 for positive
    */
   // Binary to decimal
   /*
    int n = -10 --> 10110 
        1. convert into binary format 10110
        2. 1s complement 01001
        3. add +1 01010
        number is 1010 but sign flag is high so -10 
   */
  
    return 0;
}