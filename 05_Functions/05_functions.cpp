#include <iostream>
using namespace std;

// function definition
double hello(double a, double b)
{
    cout << "Hello\n";
    return a + b;
}

int minTwo(int g, int h) // parameter
{
    if (g > h) {
        return g;
    } else {
        return h;
    }
}
void beRojGar() {

};
int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
float calcArea(int a) // parameters - copy of values
// values that dont change like 10,15,20,A,a,b,h are literals
{
    return a * a;
}

int summa(int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        sum += i;
    }
    return sum;
}
int fact(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++) {
        fact *= i;
    }
    return fact;
}
// function only work when called in main function
int main()
{
    cout << "Val is = " << hello(10, 4) << endl;
    cout << "greater = " << minTwo(10, 4) << endl; // arguments
    cout << "greater = " << sumN(10) << endl;
    cout << "Area of square = " << calcArea(40) << endl; // arguments
    cout << "Summation is = " << summa(10) << endl; // arguments
    cout << "Factorial is = " << fact(6) << endl; // arguments
    
    return 0;
}

// always write return statement at last

// Two types of memory
/*
    1. Stack
        static allocation
        main function got stack frame
        normal function got callstack        
    2. Heep
        dynamic allocation
*/