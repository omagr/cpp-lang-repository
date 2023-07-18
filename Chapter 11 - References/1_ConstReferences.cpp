#include <iostream>

int main()
{
    // @ Const Ref w/o Const vars 
    int int_data{33};
    // References
    const int & ref_int_data{int_data};

    // printing 
    std::cout << "int_data : " << int_data << std::endl;
    std::cout << "&int_data : " << &int_data << std::endl;

    // can modify original var but ref
    int_data++;
    ref_int_data++;

    // @ Const vars w/o Const ref 
    const double double_data{55};
    double& ref_double_data {double_data};

    // printing 
    std::cout << "double_data : " << double_data << std::endl;
    std::cout << "&double_data : " << &double_data << std::endl;

    // can modify original var but ref
    double_data++;
    ref_double_data++; 
    
    // @ Simpulating ref behaviour with pointers 
    const int * const p_int {&int_data};
    *p_int = 45;
    
    return 0;
}