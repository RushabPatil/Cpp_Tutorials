#include <iostream>
#include <list>
using namespace std;

//Object Oriented prgramming allows you to represent real life objects in real life
//fruit class - banana, apple
//car class - ford, mercedes

//class is a user defined data type

class YoutubeChannel
{
    //access modifiers
public:
    //attributes
    string Name;
    string OwnerName;
    double SubscribersCount;
    list<string> PublishedVideoTitle;

    //Constructor - assign initial value to the created object
    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    //Class Method
    void getInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "Subscriber Count: " << SubscribersCount << endl;
        cout << "Videos:" << endl;
        for (string videoTitle : PublishedVideoTitle)
        {
            cout << videoTitle << endl;
        }
    }
};

//creating many objects of same type would require repeating same code many time
//To resolve this issue we use class constructor
//Constructor is a method that is called at construction of each object

int main()
{
    YoutubeChannel channel1("MrBeast", "Jake");
    channel1.PublishedVideoTitle.push_back("Icecream most expensive");

    YoutubeChannel channel2("Pewdiepie", "No leg Felix");
    
    channel1.getInfo();
    channel2.getInfo();

    
}