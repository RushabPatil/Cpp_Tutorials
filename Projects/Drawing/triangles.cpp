#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
    //Drawing a triangle
    int height, length;
    cout << "Height = ";
    cin >> height;

    cout << "Length = ";
    cin >> length;

    char symbol;
    cout << "Your Symbol = ";
    cin >> symbol;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }

    cout << endl
         << endl;

    for (int i = length; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
}