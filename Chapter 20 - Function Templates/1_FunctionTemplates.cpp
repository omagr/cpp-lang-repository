#include <iostream>
#include <string>

/*
 * Function templates are only a blueprint that a compiler can use to write actual code in its memory, not real C++ code or logic.
 * If a template instance has already been created and is being called again, the compiler is wise enough to use the prior instance as a function rather than creating another instance.
 * the real function is made by a template instance
 */

//@ template difinition
template <typename T>
T maximum(T a, T b);

int main()
{
    //* int
    int a{10};
    int b{23};  
    //* double
    double c{34.7};
    double d{23.4};
    //* string
    std::string e{"hello"};
    std::string f{"world"};
    //* pointer
    int *p_a{&a};
    int *p_b{&b};

    //@ template instance
    auto resultofponiter = maximum(p_a, p_b);
    auto resultofpintegr = maximum(a, b);
    auto resultofdouble = maximum(c, d);
    auto resultofstring = maximum(e, f);

    std::cout << "resultofponiter : " << *resultofponiter << std::endl;
    std::cout << "resultofpintegr : " << resultofpintegr << std::endl;
    std::cout << "resultofdouble : " << resultofdouble << std::endl;
    std::cout << "resultofstring : " << resultofstring << std::endl;

    return 0;
}

//@ template declartion
template <typename T>
T maximum(T a, T b) { return (a > b) ? a : b; };