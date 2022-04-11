//library used for printing strings to the screen
#include <iostream>

/**
 * @brief 
 * 
 * @param first_param 
 * @param second_param 
 * @return int 
 */
int addNumbers(int first_param, int second_param){
    return first_param + second_param;
}

int main() {

    int first_number {3}; // Statement
    int second_number {7};

    std::cout << "First Number : " << first_number << std::endl;
    std::cout << "Second Number : " << second_number << std::endl;


    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(25, 7);
    std::cout << "Sum : " << sum << std::endl;


    return 0;
    
}