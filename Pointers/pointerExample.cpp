#include <iostream>
using namespace std;

//using pointers to return multiple values from a function is a very common use of pointers
//Create array of numbers
//Create two functions to return smallest and largest number from the array
//Then use pointers functionality to create one function that will do the both things above

int getMin(int numbers[], int size)
{
    int min = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
        
    }
    return min;
}

int getMax(int numbers[], int size)
{
    int max = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

void getMinAndMax(int numbers[], int size, int* min, int* max){
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > *max)
            *max = numbers[i];

        if (numbers[i] < *min)
            *min = numbers[i]; 
    }
}

int main()
{
    int numbers[5] = {5, 4, -2, 9, 69};
   /* cout << "Min is " << getMin(numbers, 5) << endl;
    cout << "Max is " << getMax(numbers, 5) << endl;*/
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 5, &min, &max);
    cout << "Min is " << min << endl;
    cout << "Max is " << max << endl;


    return 0;
}
