#include <iostream>
using namespace std;

int main()
{
    //Arithemetic Operators -> +, -, *, /, %
    cout << 5 + 2 << endl; //addition
    cout << 5/2 << endl;   //integer division -> the result is rounded down for integer diivision
    cout << 5/2.0 << endl; //float division -> the result is not rounded
    cout << 5 % 2 << endl; //modulo -> returns the remainder of the division

    //Increment and decrement operators -> ++, --
    int counter = 7;
    counter++; // 8
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    //Pre Increment and pre decrement 
    int counter2 = 7;
    cout << ++counter2 << endl; //8
    cout << --counter2 << endl; //7

    //Relational Operators -> used to compare two operands
    //<, > , <=, >=, ==, !=
    int a = 5, b = 5;
    cout << ( a > b);
    cout << ( a < b);
    cout << ( a <= b);
    cout << ( a >= b);
    cout << ( a == b);
    cout << ( a != b);

    // comma "," -> this operator means "also"

    //Logical Operators -> &&, ||, !
    //Used to combine two or more conditions
    cout << ( a == 5 && b == 5); // "AND" logic 
    cout << ( a == 5 || b == 5); // "OR" logic
    cout << !( a == 5 || b == 5); // "NOT" logic

    // Priority of operators -> arithematic > relational > logical > assignment 
    cout << ( a == 5 && b == 5 + 3);

    //Assignment Operators -> =, +=, -=, *=, /=, %=
    int x = 5;
    x += 7; // x = x + 7
    x -= 7; // x = x - 7
    x *= 7; // x = x * 7
    x /= 7; // x = x / 7
    x %= 7; // x = x % 7

    








}
