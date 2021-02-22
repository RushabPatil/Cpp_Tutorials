#include <iostream>
using namespace std;

void main()
{
    //For Loop explained through calculating facatorial of the number
    double number, factorial = 1;
    cout << "Enter the number: ";
    cin >> number;

    /*
    for(int i = 1; i <= number; i++){
        factorial *= i;
    }
    */
    if (number > 0)
    {
        for (int i = number; i >= 1; i--)
        {
            factorial *= i;
        }

        cout << "The factorial of the number= " << factorial;
    }
    else if (number == 0)
        cout << "No factorial for 0.";
}