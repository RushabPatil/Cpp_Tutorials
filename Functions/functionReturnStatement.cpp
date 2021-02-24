#include <iostream>
using namespace std;

//return statements
//return datatype - can be of any datatype and void

bool isPrimeNumber(int number){
    
    bool isPrimeFlag = true;
    for (int i = 2; i < number; i++){
        if (number % i == 0)
            return false;
    }
    return true;
}

void main()
{
    for(int i = 1; i <= 1000; i++){
        bool isPrime = isPrimeNumber(i);

        if(isPrime)
            cout << i << " is a prime number!" << endl;
    }

}

