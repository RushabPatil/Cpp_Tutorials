#include <iostream>
using namespace std;

//function overloading
//Function with same name but different parameters

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

void main()
{   
    //sum function overloaded with three different types of parameters
    cout << sum(4, 3) << endl;
    cout << sum(4.12, 3.09) << endl;
    cout << sum(4.12, 3.09, 10.11) << endl;
}

int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

float sum(float a, float b, float c)
{
    return a + b + c;
}
