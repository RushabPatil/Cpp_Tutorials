#include <iostream>
using namespace std;

//Introduction to pointers
//Pointers are similar to variables, but instead of storing values they store
//adress - memory location
//This file is just answering what are pointers?
//Application of pointers in other files in the pointers folder


int main()
{
    int n = 5;
    cout << &n << endl; //Physical Address of the value in the memory

    int *ptr = &n;      // * -> creates a pointer
    cout  << ptr << endl;
    cout << *ptr << endl;   //dereferencing a pointer
    *ptr = 10;
    cout << *ptr << endl;   //dereferencing a pointer

    //type of the pointer has to be same to the type of the variable being pointed to
    //int -> int
    //char -> char
    //float -> float
    //double -> double
    //string -> string

    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout  << "v = " << v << endl;



    return 0;
}