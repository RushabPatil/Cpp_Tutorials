#include <iostream>
using namespace std;

int main()
{
    int luckyNumbers[5];

    /*
    cout << luckyNumbers << endl;//this will give the memory address of the first element of the array
    //luckyNumbers behaves as a pointer

    cout << &luckyNumbers[0] << endl;
    cout << luckyNumbers[2] << endl; //[] -> used for dereferencing the pointer
    cout << *(luckyNumbers + 2) << endl; 
    */

    for (int i = 0; i <= 4; i++)
    {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << "Number: " << *(luckyNumbers + i) << endl;
    }

    //if i > 4 -> this will dereference a random memory location
    //changing the value of the random memory location can lead to serious problems

    return 0;
}