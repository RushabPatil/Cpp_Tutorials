//library used for printing strings to the screen
#include <iostream>

consteval int get_value(){
    return 42;
}

//entry point of the program
int main() {

    std::cout << "Hello, World!" << std::endl;
    std::cout << "number1" << std::endl;
    std::cout << "number2" << std::endl;

    for(int i = 0; i < 10; i++){
        std::cout << "Rishi" << std::endl;
    }

    return 0;

}