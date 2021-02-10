#include <iostream>
using namespace std;

//Learning the use of Switch case statement  by codinng a calculator

int main()
{
    float num1, num2;
    char operation;

    cout << "**Demon Lord Calculator**" << endl;
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '-':
        cout << num1 << operation << num2 << "=" << num1 - num2;
        break;
    case '+':
        cout << num1 << operation << num2 << "=" << num1 + num2;
        break;
    case '*':
        cout << num1 << operation << num2 << "=" << num1 * num2;
        break;
    case '/':
        cout << num1 << operation << num2 << "=" << num1 / num2;
        break;
    case '%':
        bool isNum1Int, isNum2Int;
        isNum1Int = (int)num1 == num1;
        isNum2Int = (int)num2 == num2;

        if (isNum2Int && isNum1Int)
            cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
        else
            cout << "Not valid!";
        break;
    default:
        cout << "Not a valid input!" << endl;
    }
}