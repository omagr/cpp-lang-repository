#include <iostream>

template <typename T>
const T &maximumPassByRef(const T &a, const T &b); // Declaration

template <typename A>
A maximumPassByValue(A a, A b); // Declaration

int main()
{
    double a{23.5};
    double b{51.2};

    std::cout << "Out - &a: " << &a << std::endl; // 0x3007bffa88
    std::cout << "Out - &b: " << &b << std::endl; // 0x3007bffa80
    auto result  = maximumPassByRef(a, b);
    auto result2 = maximumPassByValue(a, b);
    std::cout << "Out - &a: " << &a << std::endl; // 0x3007bffa88
    std::cout << "Out - &b: " << &b << std::endl; // 0x3007bffa80

    return 0;
}

//* Pass by ref
template <typename T>
const T &maximumPassByRef(const T &a, const T &b)
{
    std::cout << "In - &a (pass by ref): " << &a << std::endl; // 0x3007bffa88
    std::cout << "In - &b (pass by red): " << &b << std::endl; // 0x3007bffa80
    return (a > b) ? a : b;
}

//* pass by value
template <typename A>
A maximumPassByValue(A a, A b)
{
    std::cout << "In - &a (pass by value): " << &a << std::endl; // 0x3007bffa60
    std::cout << "In - &b (pass by value): " << &b << std::endl; // 0x3007bffa68
    return (a > b) ? a : b;
}