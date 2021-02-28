#include <iostream>
#include <list>
using namespace std;

//Object Oriented prgramming allows you to represent real life objects in real life
//fruit class - banana, apple
//car class - ford, mercedes

//Polymorphism - Two or more objects inheriting from the same class
//but has different implementation of the methods from the base class but
//with different implementaton

//class is a user defined data type
class YoutubeChannel
{
    //access modifiers - Private, Public
private:
    //attributes
    string Name;
    double SubscribersCount;
    list<string> PublishedVideoTitles;

protected:
    string OwnerName;
    int contentQuality;

public:
    //Constructor - assign initial value to the created object
    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        contentQuality = 0;
    }

    //Modifier Methods
    //increase subscribers counter
    void subscribe()
    {
        SubscribersCount++;
    }

    //decrease subscribers counter
    void unsubscribe()
    {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }

    //publish video
    void publishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }

    //Getter Methods
    //get channel's info
    void getInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "Subscriber Count: " << SubscribersCount << endl;
        cout << "Videos:" << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }

    //get the channel name
    void getChannelName()
    {
        cout << Name;
    }

    //get the channel's owner name
    void getChannelOwnerName()
    {
        cout << OwnerName;
    }

    //get channel's subscriber's count
    void getChannelSubscriberCount()
    {
        cout << SubscribersCount;
    }

    //check youtube channel analytics
    void checkAnalytics()
    {
        if (contentQuality < 5)
            cout << Name << " has bad quality content!" << endl;
        else
            cout << Name << " has great content!" << endl;
    }
};

//For creating a specific class with extra attributes than the base class you use inheritance
//Base Class - YoutubeChannel
//Derived Class - cookingYoutubeChannel
class cookingYoutubeChannel : public YoutubeChannel
{

public:
    //Constructor - assign initial value to the created object
    cookingYoutubeChannel(string name, string ownerName) : YoutubeChannel(name, ownerName)
    {
    }

    //method only available to derived class
    //base class would not be able to access this method
    void Practice()
    {
        cout << OwnerName << " is practicing cooking, learning new recipes!" << endl;
        contentQuality++;
    }
};

class singerYoutubeChannel : public YoutubeChannel
{

public:
    //Constructor - assign initial value to the created object
    singerYoutubeChannel(string name, string ownerName) : YoutubeChannel(name, ownerName)
    {
    }

    //method only available to derived class
    //base class would not be able to access this method
    void Practice()
    {
        cout << OwnerName << " is practicing singing and learning how to dance!" << endl;
        contentQuality++;
    }
};
//creating many objects of same type would require repeating same code many times
//To resolve this issue we use class constructor
//Constructor is a method that is called at construction of each object
int main()
{
    cookingYoutubeChannel bingeWithBabish("Binging With Babish", "Babish");
    singerYoutubeChannel singWithMe("Sing with me", "Poop emoji");

    bingeWithBabish.Practice();
    singWithMe.Practice();
    singWithMe.Practice();
    singWithMe.Practice();
    singWithMe.Practice();

    YoutubeChannel* yt1 = &bingeWithBabish;
    YoutubeChannel* yt2 = &singWithMe;

    yt1->checkAnalytics();
    yt2->checkAnalytics();


}