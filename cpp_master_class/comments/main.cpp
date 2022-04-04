//library used for printing strings to the screen
#include <iostream>

/*
    * This is the main function.
    * It is the first function that is called when the program is run.
    * It is the function that contains the main loop of the program.
    *
    * @param argc - the number of arguments passed to the program
    * @param argv - the array of arguments passed to the program
    * @return - the exit status of the program
*/

//entry point of the program
int main() {

    std::cout << "Hello, World!" << std::endl;

    //print the "Rishi" 10 times in the console
    for(int i = 0; i < 10; i++){
        std::cout << "Rishi" << std::endl;
    }
    return 0;

}