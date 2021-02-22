//selection
//sequencing
//iteraton

//these three can be combined to solve any problems in programming
#include <iostream>
using namespace std;

void main()
{
    //write out all the numbers between 100-500 that are divisible by 3 and 5
    int counter = 100;

    //while loop - try to avoid using while loops
    while (counter <= 500)
    {
        if (counter % 3 == 0 || counter % 5 == 0)
        {
            cout << counter << " is divisible!" << endl;
            counter += 1; //make sure to add this line to prevent infinite loop
        }
        else
            counter += 1;
    }
}
