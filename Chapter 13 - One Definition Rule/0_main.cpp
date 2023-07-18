/*
 * One Definition Rule -> we cant have more than one definition for everthing in same translation unit
 * Free Stanindg vars
 * Functions
 * Classes (exception - can show up in multiple translation unit)
 * Class Members and functions
 * Class static member function
 */

#include <iostream>

// #Free Stanindg vars + global
int Age{10}; //- declartion and definition
// int Age{20}; //! Error

// #Functions + global
int Sum(int a, int b) {
    return a + b;
} //- declartion and definition
// int Sum(int a, int b) { return a + b; } //! Error

// #lasses + global
struct Point
{
    double m_x;
};


int main(int argc, char const *argv[]) {
    int Age{20}; //! Error
    std::cout << "Age: " << Age << std::endl;
    return 0;
};