#include <iostream>
using namespace std;

int main()
{   
    //User enters side lengths of a triangle (a, b, c)
    //Program should write out whether than triangle is equilateral, isosceles, or scalene

    //defining variables for traingle sides
    float a, b, c;

    //asking user to input the side lenghts
    cin >> a >> b >> c;

    //using conditions for equilateral, isosceles, and scalene triangle
    //in the if else statements
    //you can remove curly brackets if there is just one command to be executed
    if( a == b && b == c)
        cout << "Equilateral triangle." << endl;
    else if(a != b && b != c && a != c )
        cout << "Scalene triangle." << endl;
    else
        cout << "Isosceles triangle." << endl;
    
}
   