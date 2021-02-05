#include <iostream>
using namespace std;

int main()
{   //following are the most common datatypes
    //integer
    int yearOfBirth = 1998;

    //character
    char gender = 'M';

    //boolean
    bool isOlderTahn18 = true;

    //float
    float averageGrade = 3.5;

    //double
    double balance = 34534364.345;


    //memory occupied by each datatype
    cout << "Size of int is "<< sizeof(int) << "bytes\n";
    cout << "Size of bool is "<< sizeof(bool) << "bytes\n";
    cout << "Size of char is "<< sizeof(char) << "bytes\n";
    cout << "Size of float is "<< sizeof(float) << "bytes\n";
    cout << "Size of double is "<< sizeof(double) << "bytes\n";

    cout << "int minimum value is "<< INT32_MIN << endl;
    cout << "int maximum value is "<< INT32_MAX << endl;
    cout << "UInt max value is "<< UINT32_MAX << endl;
}