#include <iostream>

/*
 * As the variables declared as static are initialized only once as they are allocated space in separate static storage so, the static variables in a class are shared by the objects.
 * There can not be multiple copies of the same static variables for different objects. Also because of this reason static variables can not be initialized using constructors.
 * its class dependant not object
 */

class Human {
    public:
        int x {0};
        //# by default 0
        static int pup;
        //# static mehtods can only accept statuc members not no-static member because its a class depenadent entity 
        static void fpup() { 
            std::cout << "inside fpup\n";
            std::cout << "pup : "<< pup <<"\n";
            //! but if
            // std::cout << "x : "<< x <<"\n";
        };
};

int Human::pup = 1;
int main()
{
        std::cout << "sizeof(Human) : " << sizeof(Human) << std::endl;
        Human elon;
        std::cout << "elon->x : " << elon.x << std::endl;
        std::cout << "elon->pup : " << elon.pup << std::endl;
        // static metods
        Human::fpup();

        elon.pup = 2; // changing it
        
        Human steve;
        std::cout << "steve->x : " << steve.x << std::endl;
        std::cout << "steve->pup : " << steve.pup << std::endl;

        // static metods
        Human::fpup();
        return 0;
}