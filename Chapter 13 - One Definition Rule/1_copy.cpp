#include <iostream>

int Age{10}; //! ld error
int Sum(int a, int b) { return a + b; } //! Error

int main(int argc, char const *argv[]) {
    std::cout << "Age: " << Age << std::endl;
    return 0;
};