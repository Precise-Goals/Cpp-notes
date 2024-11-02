#include <iostream>
#include <vector>
using namespace std;
int priVec(vector<int> vec)
{
    for (int i : vec) {
        cout << i << " ";
    }
    return 0;
}
int main()
{
    // static and dynamic alllocation
    // static memory allocate at compile time (likhte wakt)
    // stack me hota hain
    // dynamic memory allocates at runtime (program run karte wakt)
    // dyanmic mem can resize memory location as per need
    // heap ke andar allocate kar rahe hote hai dynamic
    // next element ke liye prev element ki storage ko double kiya jata hai
    // size - no of elements stored in vector
    // capacity no of elements that can be stored in vector
    vector<int> Vec;
    Vec.push_back(0); // 0

    Vec.push_back(1); 
    Vec.push_back(2); 
    
    Vec.push_back(3); 
    Vec.push_back(4); 
    cout << "Vector is ";
    priVec(Vec);
    cout << endl;
    cout << "The size of Vector is " << Vec.size() << endl;
    cout << "The capacity of Vector is " << Vec.capacity() << endl;
    return 0;
}