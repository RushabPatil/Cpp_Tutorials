#include <iostream>
using namespace std;

//Array is collection of elements in continuous memory
//Pros - Getting elements from the array is very convenient
//Cons - Not convenient for inserting and removing the elements from the array
//The computer will create a new copy of the array in the memory with the desired changes
//This is not really efficient use of memory
//The size of the array has to be constant and nned to be declared before the compile time

int main()
{
    int size;
    cout << "Size = ";
    cin >> size;
    int *myArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "]";
        cin >> myArray[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
        cout << *(myArray + i) << " ";
    }

    delete[]myArray;
    myArray = NULL;

    //In the use of dynamic memory, always delete the allocated memory
    //new(memory allocation) -> delete(memory deallocation) 
}