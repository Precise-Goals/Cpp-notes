#include <iostream>
using namespace std;
int main()
{
    cout << "Hello world";
    // Variables
    // Container to store the data

    // Datatypes also 8 bit = 1Byte
    // Primitive (Basic) Datatypes
    // int, float, double, char, bool
    //  4 ,   4  ,   8   ,  1  ,  1

    // Typecasting
    // Converting data from one type to another
    // (IMPLICIT) conversion - data of small datatype storing in bigger datatype (easier conversion)
    // (EXPLICIT) conversion - data of bigger datatype storing in small datatype (forced by programmer)

    // cpp follows GIF function not Approximation
    int age;
    cin >> age;
    cout << age
         << endl;

    // Operators 
    // Arithmatic Operators  - add,sub,mul,div,modulon 
    int a,b;
    a=3;b=32;
    cout<<"addition is "<<a+b<<endl;
    cout<<"difference is "<<a-b<<endl;
    cout<<"multiplication is "<<a*b<<endl;
    cout<<"division is "<<a/b<<endl;
    cout<<"modulo is "<<a%b<<endl;
    // relational and logical Operator
    int c,d;
    c=15;
    d=45;
    cout<<"AND"<<((c>d)&&(c=d))<<endl;
    cout<<"NAND"<<!((c>d)&&(c<d))<<endl;
    cout<<"OR"<<((c>d)||(c<=d))<<endl;
    cout<<"NOR"<<!((c>d)||(c<d))<<endl; 
    // unary operator
    // increment ++
    // decrement --
    int g=6,h;
    h = g++; // kaam -> update
    cout<<h<<endl; // remains 6
    cout<<g<<endl; // updates 7
    
    int u=9,o;
    o = ++u; // update -> kaam
    cout<<u<<endl;
    cout<<o<<endl;
    return 0;
}