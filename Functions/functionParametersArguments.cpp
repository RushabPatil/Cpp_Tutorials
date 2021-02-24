#include <iostream>
using namespace std;

//default parameter
//void introduceMe2(string name, int age = 0)
//if age is not passed as a parameter the default value will be 0.

//Default parameter cannot be passed to the middle parameter. 
//They have to be assigned in order last -> first

//name - parameter
void introduceMe(string name)
{
    cout << "My name is " << name << endl;
}

//second parameter
void introduceMe2(string name, int age)
{
    cout << "My name is " << name << ", and  I am " << age << "years old ." << endl;
}

//Rishi - argument
void main()
{   
    string name;
    int age;

    cout << "Name: ";
    cin >> name;

    cout << "Age: ";
    cin >> age;

    //multiple arguments
    introduceMe2(name, age);

}