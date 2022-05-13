#include <iostream>

int main() {

/*
Lambda function signature:
                            [capture list] (parameter list) -> return type {
                                    //Function body
                            }
*/

/**
 * Lamda function that takes parameters and returns a value
 */
auto func = []() {
  std::cout << "Hello, World!" << std::endl;
};
func();

/**
 * Declare a lambda function and call it directly
 */
[]() {
  std::cout << "Hello, World!" << std::endl;
}();

/**
 * Lambda function that takes parameters and returns a value
 */
auto result = [](double a, double b) {
    return a + b;   
}(12.1, 5.7);

std::cout << result << std::endl;


/**
 * Lambda function that takes parameters and returns a value
 */
auto func1 = [](int a, int b) {
  std::cout << a + b << std::endl;
};

func1(1, 2);
func1(10, 2);

/**
 * Lambda function with int return type
 */
auto result1 = [](double a, double b)-> int {
    return a + b;   
};

return 0;

}