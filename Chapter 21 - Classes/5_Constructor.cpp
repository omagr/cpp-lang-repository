#include <iostream>

/*
 * Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. 

 * Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object which is why it is known as constructors.

 * • Constructor is a member function of a class, whose name is same as the class name.
 * • Constructor is a special type of member function that is used to initialize the data members for an object of a class automatically, when an object of the same class is created.
 * • Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object that is why it is known as constructor.
 * • Constructor do not return value, hence they do not have a return type.
 * • The name of the constructor is same as its class name.
 * • Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class.
 * • Constructors do not return values; hence they do not have a return type.
 * • Constructors gets called automatically when we create the object of the class.
 * • Constructors can be overloaded.
 * • Constructors can not be declared virtual.
 * • Constructors cannot be inherited.
 * • Addresses of Constructor cannot be referred.
 * • Constructors make implicit calls to new and delete operators during memory allocation.
 * • If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body).
 

 * Default constructor is the constructor which doesn’t take any argument. It has no parameters. It is also called a zero-argument constructor. made by a compiler If it is not explicitly specified by you but was created by you, the compiler will utilise it.
 * Note: Even if we do not define any constructor explicitly, the compiler will automatically provide a default constructor implicitly.

 * Parameterized Constructors: It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other function. When you define the constructor’s body, use the parameters to initialize the object.
 * Note: when the parameterized constructor is defined and no default constructor is defined explicitly, the compiler will not implicitly call the default constructor and hence creating a simple object as
 * Uses of Parameterized constructor: 
 *     • It is used to initialize the various data elements of different objects with different values when they are created.
 *     • It is used to overload constructors.

 * Copy constructor:is a member function that initializes an object using another object of the same class. 
 * Whenever we define one or more non-default constructors( with parameters ) for a class, a default constructor( without parameters ) should also be explicitly defined as the compiler will not provide a default constructor in this case. However, it is not necessary but it’s considered to be the best practice to always define a default constructor. 
 * Copy constructor takes a reference to an object of the same class as an argument.
*/

class Student {
    int age{};
    int stn{};
    int stn2{};
    public:
        //# Default Construtor
        Student() { std::cout << "Default Construtor\n"; }

        //# Parameterized Construtor
        Student(int a , int b ) { 
            age = a;
            stn = b;
            std::cout << "Parameterized Construtor\n";
        }

        //# overloading of Construtor
        Student(int a , int b, int c ) { 
            age = a;
            stn = b; 
            stn2 = c; 
            std::cout << "Parameterized Construtor2\n";
        }

        //Constctors
        // Cylinder(){
        //     base_radius = 2.0;
        //     height = 2.0;
        // } 
};


int main(){
    Student tanya;
    Student astha(10, 23);
    Student renuka(10, 23, 12);
    return 0;
}

