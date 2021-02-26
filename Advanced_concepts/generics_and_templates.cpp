#include <iostream>
using namespace std;

// To accomodate for different types we would have to overload a function many times
// To prevent this we use generics
// Generics allow us to implement the same logic with different variables
// Generics does this using templates

template <typename T>

//Generic version
void Swap(T &a, T &b) //passing variables by reference - int&
{
    T temp = a;
    a = b;  
    b = temp;
}

int main()
{
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap<int>(a, b);
    cout << a << " - " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " - " << d << endl;
    Swap<char>(c, d);
    cout << c << " - " << d << endl;
}