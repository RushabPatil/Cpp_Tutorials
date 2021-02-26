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
};

int main()
{
    YoutubeChannel channel1;
    channel1.Name = "MrBeast";
    channel1.OwnerName = "Jake";
    channel1.SubscribersCount = 111110000;
    channel1.PublishedVideoTitle = {"$1000 pizza", "most expensive icecream"};

    cout << "Name: " << channel1.Name << endl;
    cout << "OwnerName: " << channel1.OwnerName << endl;
    cout << "Subscriber Count: " << channel1.SubscribersCount << endl;
    cout << "Videos:" << endl;
    for (string videoTitle : channel1.PublishedVideoTitle)
    {
        cout << videoTitle << endl;
    }
}