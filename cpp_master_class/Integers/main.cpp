//library used for printing strings to the screen
#include <iostream>


int main() {

/*
    int elephant_count;

    //braced initialization
    int lion_count{};
    int dog_count {10};
    int cat_count {15};

    int domesticanimal_count {dog_count + cat_count};

    int narrowing_conversion {2.9};

    std::cout << "Elephant count :" << elephant_count << std::endl;
    std::cout << "Lion count :" << lion_count << std::endl;
    std::cout << "Dog count :" << dog_count << std::endl;
    std::cout << "Cat count :" << cat_count << std::endl;
    std::cout << "Domestic animal count :" << domesticanimal_count << std::endl;
*/

/*
    //functional initialization
    int apple_count(0);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    //Information lost. Less safe than braced intialization.
    int narrowing_conversion_functional (2.9);

    std::cout << "The number of apples is " << apple_count << std::endl;
    std::cout << "The number of oranges is " << orange_count << std::endl;
    std::cout << "The number of fruits is " << fruit_count << std::endl;
    std::cout << "The number of narrowing conversions is " << narrowing_conversion_functional << std::endl;
*/


    // Assignment Initialization
    int bike_count = 0;
    int car_count = 10;
    int truck_count = 11;
    int vehicle_count = bike_count + car_count + truck_count;

    // Less Safe than the braced initialization
    int narrowing_conversion_assignment = 2.9;

    std::cout << "The number of bikes is " << bike_count << std::endl;
    std::cout << "The number of cars is " << car_count << std::endl;
    std::cout << "The number of trucks is " << truck_count << std::endl;
    std::cout << "The number of vehicles is " << vehicle_count << std::endl;
    std::cout << "The number of narrowing conversions is " << narrowing_conversion_assignment << std::endl;


    //Check the size with sizeof
    std::cout << "The size of bike_count is " << sizeof(bike_count) << std::endl;
    std::cout << "The size of car_count is " << sizeof(car_count) << std::endl;

    return 0;

}