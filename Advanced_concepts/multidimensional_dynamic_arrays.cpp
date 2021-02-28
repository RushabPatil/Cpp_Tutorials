#include <iostream>
using namespace std;

/*
step 1: create a double pointer in the memory stack
step 2: create a vertical array for pointer - no. of rows
step 3: create a array for each row created in step 2
*/

int main()
{
    int rows, cols;
    cout << "rows, cols:";
    cin >> rows >> cols;

    int **table = new int*[rows]; //double pointer -> pointer

    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[cols];
    }

    table[1][2] = 88;


    //memory deallocation
    for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
    }
    delete[] table;

    table = NULL;
    
    

}
  