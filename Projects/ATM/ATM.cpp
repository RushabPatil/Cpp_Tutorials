#include <iostream>
using namespace std;

void showMenu()
{

    cout << "***********Menu***********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Transfer" << endl;
    cout << "5. Exit" << endl;
    cout << "**************************" << endl;
}

int main()
{
    //check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;
    
    double withdrawAmount;

    do
    {
        showMenu();
        cout << "Option : ";
        cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            cout << "Balance is: " << balance << "$" << endl;
            break;
        case 2:
            cout << "Deposit Amount: ";
            double depositAmount;
            cin >> depositAmount;                  
            balance += depositAmount;
            break;
        case 3:
            cout << "Withdraw Amount: " << withdrawAmount << "$" << endl;
            cin >> withdrawAmount;

            if (withdrawAmount <= balance)
                balance -= depositAmount;
            else
                cout << "Not enough money!" << endl;
            break;
        }
    } while (option != 4);
}