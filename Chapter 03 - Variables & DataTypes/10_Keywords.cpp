https://www.geeksforgeeks.org/cpp-keywords/
#include <iostream> 

// @constant 
int main()
{
    const int constant = 10;
    return 0;
}

// @global variable
int x = 5; // global variable
int main() 
{
    int y = 10; // local variable
    return 0;       
}

// @Literals
int main() 
{
    const int y = 10; 
    // #For example, “const int = 5;“, is a constant expression and the value 5 is referred to as a constant integer literal. 
    return 0;
}

/*
    Literals are the Constant values that are assigned to the constant variables. Literals represent fixed values that cannot be modified. Literals contain memory but they do not have references as variables. Generally, both terms, constants, and literals are used interchangeably. 
*/