#include <iostream>
using namespace std;

void main()
{
    //Nested Loops

    int grade, gradeSum = 0;

    for(int i = 0; i < 3; i++)
    {
        do{
            cout << "Enter grade" << i + 1 << ":";
            cin >> grade;

        }while (grade < 1 || grade > 5);

        gradeSum += grade;
    }

    cout << "Sum = "<< gradeSum << endl;
    cout << "Average grade = "<< (float)gradeSum/3.0 << endl;
}