#include <iostream>

template <typename T> 
T maximum(T a, T b) {
    return a > b ? a : b;
}

template <typename T>
T multiply(T a, T b) {
    return a * b;
}


int main() {

    int x{5};
    int y{10};

    auto result = multiply(x, y);
    std::cout << result << std::endl;

    return 0;

}