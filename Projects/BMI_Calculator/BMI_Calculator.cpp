//Body Mass Index Calculator
#include <iostream>
using namespace std;

void main()
{

    //BMI Calculator
    //weight(kg)/height * height(m)
    //underweight < 18.5
    //Normal weight 18.5 - 24.9
    //Overweight > 25

    float weight, height, BMI;
    cout << "weight(kg), height(m): ";
    cin >> weight >> height;

    BMI = weight / (height * height);

    cout << "Your Body Mass Index = " << BMI << endl;

    if (BMI < 18.5)
        cout << "Underweight" << endl;
    else if (BMI > 25)
        cout << "Overweight" << endl;
    else
        cout << "Normal weight" << endl;
}