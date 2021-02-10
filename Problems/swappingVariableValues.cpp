#include <iostream>
using namespace std;

int main()
{
    //Program for sawpping values of two variables
    int a = 20;
    int b = 10;

    //solution with third variable
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << "b = " << b << endl;

    //solution without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << "b = " << b << endl;
}