//library used for printing strings to the screen
#include <iostream>
#include <string>

int main() {
    
    /*
    int age1;
    std::string name;

    std::cout << "Please enter your name and age: " << std::endl;
    std::cin >> name >> age1;

    std::cout << "Hello " << name << " you are " << age1 << " years old" << std::endl;

    */

    // Data with spaces

    std::string full_name;
    int age2;

    std::cout << "Please enter your name and age: " << std::endl;
    
    std::getline(std::cin, full_name);
    std::cin >> age2;


    std::cout << "Hello " << full_name << " you are " << age2 << " years old" << std::endl;


    return 0;
    
}