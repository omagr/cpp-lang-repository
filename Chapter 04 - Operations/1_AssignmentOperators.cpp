
/*
DESCRIPTION	                                       OPERATOR
simple assignment	                                a = b
*/

/*
Assignment operators are used to assign value to a variable. The left side operand of the assignment operator is a variable and the right side operand of the assignment operator is a value. The value on the right side must be of the same data type as the variable on the left side otherwise the compiler will raise an error. “=” This is the simplest assignment operator. This operator is used to assign the value on the right to the variable on the left. 
*/

#include <iostream>
int main() {
  
    // simple assignment
    int variable;
    variable = 25;
    std::cout << "The value is : " << variable << std::endl;

    return 0;
}