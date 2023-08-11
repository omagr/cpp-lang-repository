#include <iostream>
#include <string_view>

/*
 * Destructor: A destructor is also a special member function as a constructor. 
 * Destructor destroys the class objects created by the constructor. Destructor has the same name as their class name preceded by a tilde (~) symbol. 
 * It is not possible to define more than one destructor. 
 * The destructor is only one way to destroy the object created by the constructor. 
 * Hence destructor can-not be overloaded. 
 * Destructor neither requires any argument nor returns any value. 
 * It is automatically called when the object goes out of scope.  
 * Destructors release memory space occupied by the objects created by the constructor. 
 * In destructor, objects are destroyed in the reverse of object creation.
 * it cannot be static and const
 * a destrctor should only be declared in public 
 */

class Dog{
    public : 
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int  age_param);
        ~Dog();
    private : 
        std::string name;
        std::string breed;
        int * p_age{nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int  age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for " << name << std::endl;
}

Dog::~Dog(){
    delete p_age;
    std::cout << "Dog destructor called for : " << name << std::endl;
}

void some_func(){
    Dog* p_dog = new Dog("Fluffy","Shepherd",2);
    delete p_dog;// Causes for the destructor of Dog to be called
}

int main(){ 
    some_func();
    std::cout << "Done!" << std::endl;
    return 0;
}