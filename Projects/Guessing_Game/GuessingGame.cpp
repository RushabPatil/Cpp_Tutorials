#include <iostream>
using namespace std;

//Guessing game for learning the use of Ternary Operators

int main()
{
    int hostNumber, guestNumber;

    cout << "Host: ";
    cin >> hostNumber;
    system("cls");

    cout << "Guest: ";
    cin >> guestNumber;

    /* if_else statement solution
    if (hostNumber == guestNumber)
        cout << " Congratulations! You have guessed  correctly.";
    else
        cout << "Failed";
    */

    // ternary operator solution

    (hostNumber == guestNumber) ? cout << "Correct!" : cout << "Failed";

    /* ways to upgrade this game
    1. Use different data types
    2. Make it easier to host with hints
    3. Using Loops
    */
}