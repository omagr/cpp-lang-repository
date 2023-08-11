#include <iostream>
/*
 * Public
 * Private
 * Protected
 */

class Circle
{
private: // By default
    double a{1};
    double b() { return a * d * 2; }
public:
    double c() { return a * d * d; }
    double d{1};
}; 

int main()
{
    //* Making the Class instance (Object)
    Circle circle;
    // # public
    std::cout << "volume : " << circle.c() << std::endl;
    std::cout << "volume : " << circle.d << std::endl;
    // #private
    std::cout << "volume : " << circle.b() << std::endl;
    std::cout << "volume : " << circle.a << std::endl;
    return 0;
}
