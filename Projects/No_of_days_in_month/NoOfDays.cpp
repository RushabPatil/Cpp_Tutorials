#include <iostream>
using namespace std;

int main()
{
    //(year%4 == 0 && year % 100 != 0 || year % 400 == 0) --> leap year rule
    int year, month;
    cout << "Year, month: ";
    cin >> year >> month;

    switch (month)
    {
    //ternary operator used here
    case 2:
        (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? cout << "29 days month." : cout << "28 days month.";
        break;

    case 4: //no break command
    case 6: //no break command
    case 9: //no break command
    case 11:
        cout << "30 days month";
        break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days month";
        break;
    default:
        cout << "Not valid input!";
    }
}