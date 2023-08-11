// https://www.geeksforgeeks.org/cpp-keywords/

#include <iostream> 
#include <string>
using namespace std;

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

// @Static
// Static variables in a Function: When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call. 
 
void demo()
{
    // static variable
    static int count = 0;
    cout << count << " ";
    // value is updated and
    // will be carried to next
    // function calls
    count++;
}
 
int main()
{
    for (int i = 0; i < 5; i++) demo();
    return 0;
}


/*
    Literals are the Constant values that are assigned to the constant variables. Literals represent fixed values that cannot be modified. Literals contain memory but they do not have references as variables. Generally, both terms, constants, and literals are used interchangeably. 
*/