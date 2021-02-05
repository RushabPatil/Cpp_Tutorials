#include <iostream>
using namespace std;

int main()
{   //User enters integer number 
    //Program writes out if the integer is even or odd

   
    int number;
    cout << " Please enter a whole number: ";
    cin >> number;
    if( number % 2 == 0) // modulo operator gives the remainder of the two numbers
    { 
        cout << "You have entered an even number. " << endl;
    }
    else
    {
        cout << "You have entered an odd number. " << endl;
    }
    cout << "The Program has ended. " << endl;


