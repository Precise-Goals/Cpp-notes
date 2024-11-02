#include <iostream>
#include <vector> // OR  #include <bits/c++.h>
using namespace std;
int priVec(vector<char> vec)
{
    for (char i : vec) {
        cout << i << " ";
    }
    return 0;
}
int main()
{
    // vector is data structure like an array
    // dyanmic in nature sizze not fixed
    // stl standard template lib'
    /*
        1. vector
        2. queue
        3. stack
        4. set
    */

    vector<int> vec; // no elements store so zero size
    // cout << vec[0]; // segmentation fault due to this code runner was not able to run anything
    vector<int> vec1 = { 1, 2, 3 }; // array type
    cout << vec1[0] << endl;
    vector<int> vec2(5, 0); // size of vector, har ek index pe kya value
    for (int i : vec2) { // this int must be equaal to vector data type ie int
        cout << i << endl;
    }
    cout << vec2[0] << endl; // 0
    cout << vec2[1] << endl; // 0
    cout << vec2[2] << endl; // 0

    vector<char> charvec = { 'a', 'b', 'c', 'd', 'e', 'f' };
    cout << "original Vector   : ";
    priVec(charvec);
    cout << "The charvec has size of : " << charvec.size() << endl;
    charvec.push_back('g');
    charvec.push_back('h');
    cout << "after push Vector : ";
    priVec(charvec);
    cout << "The charvec has size after push of : " << charvec.size() << endl;
    charvec.pop_back(); // last element thrown oout
    cout << "after pop Vector  : ";
    priVec(charvec);
    cout << "The charvec has size after push of : " << charvec.size() << endl;
    cout << "Starting value is " << charvec.front() << endl; // prints initial value in vector
    cout << "Ending Value is " << charvec.back() << endl; // prints initial value in vector
    cout << "value at 3rd position is " << charvec.at(3) << endl; // prints initial value in vector // DONT ACCESS VALUES FURTHER INDEX EVEN AFTER PUSHING
    return 0;
}

/*
vector functions
1. size determine the size of vector
2. push_back
3. pop_back

*/