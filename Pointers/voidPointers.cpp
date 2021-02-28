#include <iostream>
using namespace std;

//Void pointer can hold the address of any other datatype
//Limitation - Void poiner cannot be directly derefernced
//Use of void pointer can lead to mistakes that might be found during compiling

void printNumber(int *numberPtr)
{
    cout << *numberPtr << endl;
}

void printChar(char *charPtr)
{
    cout << *charPtr << endl;
}

void print(void *ptr, char type)
{
    //type
    // int - 'i', char - 'c', float - 'f' and so on

    switch (type)
    {
    case 'i':
        cout << *(int *)ptr << endl;break; //casting used with void pointers to be able to deeference it
    case 'c':
        cout << *(char *)ptr << endl;break;
    }
}

int main()
{
    int number = 5;
    char letter = 'a';

    /*  
    printNumber(&number);
    printChar(&letter);
    */

    // To print other type of variables we would have to write fucntions with different
    // types of pointers
    // This involves repeating the same code again and again with slight changes
    // This problem can be solved using the void pointers

    print(&number, 'i');
    print(&letter, 'c');

    

    return 0;
}