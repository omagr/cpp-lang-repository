#include <iostream>

const double PI{3};

/*
 * Mmbers can be stack and pointer varibale but never be refrences because of quality of being unilized of members 
 */

class Circle {
    double extr{1};
    double perimeter() { return PI * base_radius * 2; }
    public:
        //* Functions (Methods)
        double volume();
    public:
        //* Variables (Member)
        double base_radius{1};
};

// scope resoultion operator :: 
double Circle::volume() { return PI * base_radius * base_radius; }

int main() {
    //* Making the Class instance (Object)
    Circle Circle1; 

    //* Accessing the object member variables
    std::cout << "volume : " << Circle1.volume() << std::endl;
    std::cout << "base_radius : " << Circle1.base_radius << std::endl;

    //* Setting up the object member variables
    Circle1.base_radius = 10;
    std::cout << "volume : " << Circle1.volume() << std::endl; 
    return 0;
}