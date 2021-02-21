#include <iostream>
using namespace std;

int main()
{
    //Count digits of a number
    double number;
    cout << "Number:";
    cin >> number;

    if (number == 0)
        cout << " You have entered 0.\n";
    else
    {
        if (number < 0)
            number = -1 * number;

        //1325 number  - number of digits = 4
        double counter = 0;

        while (number > 0)
        {
            number = number / 10;
            counter++;
        }
        cout << "There are " << counter << " digits in the number";
    }
}