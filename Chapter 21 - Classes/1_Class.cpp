#include <iostream>

const double PI{3};

/*
 * Mmbers can be stack and pointer varibale but never be refrences because of quality of being unilized of members 
 */

class Circle {

    //* By default - private
    double extr{1};
    double perimeter() { return PI * base_radius * 2; }

    public:
        //* Functions (Methods)
        double volume() { return PI * base_radius * base_radius; }

    public:
        //* Variables (Member)
        double base_radius{1};
};

int main() {

    //* Making the Class instance (Object)
    Circle Circle1; 

    //@ Change and see the public member variables
    std::cout << "volume : " << Circle1.volume() << std::endl;
    Circle1.base_radius = 10;
    std::cout << "volume : " << Circle1.volume() << std::endl;
    Circle1.base_radius = 8;
    std::cout << "volume : " << Circle1.volume() << std::endl;

    //! Change and see the default member variables
    Circle1.extr = 8;
    std::cout << "volume : " << Circle1.perimeter() << std::endl;

    return 0;
}



// just asssume your cousin ofc lakdki dost toh hnhi but suppose ki chll sonjoli ya koi or kisis bde shr me jay or wha pade wa chill kre job kre whi rh or tu yhi rh or bhi khbi mile toh wo react kregi kya gnda aadmi h bncd bkr dikhta h boring or dosto ko fist priority de 