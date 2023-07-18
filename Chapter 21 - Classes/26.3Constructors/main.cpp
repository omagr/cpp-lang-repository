#include <iostream>

const double PI {3.1415926535897932384626433832795};

/*
 * Construtor: a special type of mehtod thaat is called everytime when an instance of class is created
 * No return Type
 * same name as class
 * can have parameter, can also be empty list
 * Usually used to inilize member variables of a class
 * made by compiler is it is not defined exciplicty
 */

class Cylinder {
    public : 
        //Constctors
        Cylinder(){
            base_radius = 2.0;
            height = 2.0;
        }

        Cylinder(double rad_param,double height_param){
            base_radius = rad_param;
            height = height_param;
        }
   
        //Functions (methods)
        double volume(){
            return PI * base_radius * base_radius * height;
        }

    private : 
        //Member variables
        double base_radius{1};
        double height{1};
};


int main(){
    //Cylinder cylinder1(10,4); // Object
    Cylinder cylinder1;
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    return 0;
}


