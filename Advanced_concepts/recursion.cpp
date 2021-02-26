#include <iostream>
using namespace std;

//recursion
//Sum numbers between m-n

int recursiveSum(int m, int n)
{
    //base case for breaking recursion ---> Very Important for avoiding infinite loop
    if (m == n)
        return m;
    return m + recursiveSum(m + 1, n);
}

int factorial(int m)
{
    
    //base case for breaking recursion ---> Very Important for avoiding infinite loop
    if (m == 1)
        return m;
    else if (m == 0)
        return 0;
    else
        return m * factorial(m - 1);
}

int main()
{
    /*
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        sum += i;
    }
    */
    int m = 5;

    cout << "factorial = " << factorial(m);
}