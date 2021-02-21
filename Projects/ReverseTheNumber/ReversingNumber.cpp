#include <iostream>
using namespace std;

void main()
{

    //Reversing Number
    int number, reversed_number = 0;
    cout << "Number:";
    cin >> number;

    while (number != 0)
    {
        reversed_number *= 10;
        int lastDigit = number % 10;
        reversed_number += lastDigit;
        number /= 10;
    }

    cout << "Reversed: " << reversed_number; 
}
