#include <iostream>

int main()
{

    /*
    Boolean : the data type bool has been introduced to hold a boolean value, true or false. they also take 8 Bits of memeory, used to make decision most time, The char data type is an integral type, meaning the underlying value is stored as an integer.
        bool x = true;  
    
    Rules: 
        1. type bool is actually equivalent to type int. Constant true is 1 and constant false is 0, The default numeric value of 
            
            true is 1,
            false is 0
    
        2.  We can use bool type variables or values true and false in mathematical expressions also.For instance,
            
            int x = false + true + 6;
        is valid and the expression on right will evaluate to 7 as false has value 0 and true will have value.
    
        3.  It is also possible to convert implicitly the data type integers or floating point values to bool type. For example, all non-zero values are considered to be true and stored as 1, while 0 is considered to be false, the statement-
            
            bool x = 0;  // false
            bool y = 100;  // true
            bool z = 15.75;  // true
            
    */


    bool x { true };
    bool y { false };
      
    if ( x == true ) {
        std::cout << "x : " << x << std::endl;
        std::cout << "y : " << y << std::endl;
    } else {
        std::cout << "y : " << y << std::endl;
        std::cout << "x : " << x << std::endl;
    }

    // --------------------------------------------------------------------------------------------------------
    // size 
    std::cout << "sixe of Bool : " << sizeof(bool) << std::endl;


    // --------------------------------------------------------------------------------------------------------
    // alpha bool value 
    std::cout << "x : " << x << std::endl;
    std::cout << std::boolalpha; // to print the actual true and false bool value
    std::cout << "x : " << x << std::endl;


    // --------------------------------------------------------------------------------------------------------
    // Integer to Boolean conversion 
    bool a { 4 }; // error: narrowing conversions disallowed
    bool b = 4 ; // copy initialization allows implicit conversion from int to bool
    bool c = 0 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b << std::endl;
	std::cout << c << std::endl;


    // --------------------------------------------------------------------------------------------------------
    // Inputting Boolean values
    bool d {}; // default initialize to false
	std::cout << "Enter a boolean value: ";
	std::cin >> d;
	std::cout << "You entered: " << d << std::endl; // It turns out that std::cin only accepts two inputs for boolean variables: 0 and 1 (not true or false). Any other inputs will cause std::cin to silently fail. In this case, because we entered true, std::cin silently failed. A failed input will also zero-out the variable, so b also gets assigned value false. Consequently, when std::cout prints a value for b, it prints 0. To allow std::cin to accept “false” and “true” as inputs, the std::boolalpha option has to be enabled:
    bool e {};
	std::cout << "Enter a boolean value: " << std::endl;

	// Allow the user to enter 'true' or 'false' for boolean values
	// This is case-sensitive, so True or TRUE will not work
	std::cin >> std::boolalpha;
	std::cin >> e;
	std::cout << "You entered: " << e << '\n';


    // --------------------------------------------------------------------------------------------------------
    // mathematical expressions in boolean
    int f = false + 1 * 10 - true;
    int g = false - true;
    int h = 2 + x + y;
    float i = x + 0.01f;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;


    return 0;
}
