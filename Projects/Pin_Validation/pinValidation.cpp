#include <iostream>
using namespace std;

void main()
{
    int usersPin = 1234, pin, errorCounter = 0;

    do
    {
        cout << "Enter your PIN: ";
        cin >> pin;

        if (pin != usersPin)
        {
            cout << "Entered wrong PIN.";
            errorCounter++;
        }       

    } while (errorCounter < 4 && pin != usersPin);

    if(errorCounter < 4)
        cout << "loading......";
    else 
        cout << "blocked...";
}