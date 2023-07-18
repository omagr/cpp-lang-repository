#include <iostream>

// # A pointer is a variable that contains the address of another variable or it is said to "point to" the other variable. A variable can be any data type including an pre-defined or user-defined object, structure or again pointer itself.

// - & (Address of Operator) --->  The address of Operator (&), It is a unary operator that returns the address of the variable(r-value) specified by its operand.
// - * (Indirection Operator) ---> The * (indirection) operator determines the value referred to by the pointer-type operand.

// ! Cannot refreence to intpointer to any other type
// ! Cannot add fix value to pointer only address of given type

int mainx()
{
    //@Declare and initialize pointer
    int *pointerToInteger;      // Will initialize with nullptr -> 0
    char *pointerToCharacter{}; // Will initialize with nullptr -> 0
    double *pointerToDouble{};

    //@Explicitly initialize with nullptr -> 0
    //@It doesn't matter if you put the * close to data type or to varible name
    int*  p_number2{nullptr};
    int * p_number3{nullptr};
    int  *p_number4{nullptr};

    //@Pointers to different variables are of the same size
    // * pointers are strongly typed var
    // * pinters have 8 byte of memory in whatever type 
    std::cout << "sizeof(double*) : " << sizeof(double *) << std::endl; //8
    std::cout << "sizeof(int*) : " << sizeof(int *) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(char *) << std::endl;

    //@Confusing as you wonder if other_int_var6 is also a pointer to int, It is not The structure is exactly the same for the previous statement
    int *p_number5{}, other_int_var{};
    int *p_number6{}, other_int_var6{};
    std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << std::endl;
    //-It is better to separate these declarations on different lines though
    int *p_number7{};
    int other_int_var7{}; // No room for confusion this time

    //@Initializing pointers and assigning them data
    int int_var{43};      // We know that pointers store addresses of variables
    int *p_int{&int_var}; // The address of operator (&);

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory)  : " << p_int << std::endl;

    // You can also change the address stored in a pointer any time
    int int_var1{65};
    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address)  : " << p_int << std::endl;

    // Can't cross assign between pointers of different types
    int *p_int1{nullptr};
    double double_var{33};
    // p_int = &double_var; //! Compiler error

    // Dereferencing a pointer :
    int *p_int2{nullptr};
    int int_data{56};
    p_int2 = &int_data;
    std::cout << "value : " << *p_int2 << std::endl; // Dereferencing a pointer

    // size and math for pointers
    // ! our machine seems to have 64 bit addresses, and thus, each address (and hence, each pointer) is 64 bits (8 bytes) long.
    std::cout << "sizof pointer : " << sizeof(p_int2) << std::endl;   //# 8byte
    std::cout << "p_int2 : " << p_int2 << std::endl; 
    std::cout << "p_int2 + 1 (4byte) : " << p_int2+1 << std::endl;  
    std::cout << "value at p_int2 + 1 (4byte) : " << *(p_int2+1) << std::endl; //#garbage valuie ofc,

    //@ typecasting & pinter maths
    int a = 1025;
    int *p{&a};
    std::cout << "p : " << p << "*p : " << *p << std::endl;   //- 98429384, 1025
    
    char *p0 = (char *)p; //@ typecasting
    std::cout << "p : " << p0 << "*p : " << *p0 << std::endl; //- 98429384, 1 ---> 00000001
    //? why? 00000000 00000000 00000100 !00000001!
    // ! but if,
    std::cout << "p : " << p0+1 << "*p : " << *(p0+1) << std::endl; //- 98429388, 4 ---> 00000100

    return 0;
}