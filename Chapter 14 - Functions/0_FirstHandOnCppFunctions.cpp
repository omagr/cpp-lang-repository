#include <iostream>

/*
    # function declartion
    - return_type function_name(type_param1 name_param1, type_param2 name_param2);

    # function difinition
    - return_type function_name(type_param1 name_param1, type_param2 name_param2)
    - {
    -    ...operations
    -    return value;
    - };

    # function declartion, function signature -> name+parameter list
    - function_name(name_argument1, name_argument1);
*/

//@ Function that takes a single parameter, and doesn't give back the result explicitly
void enter_bar(size_t age)
{ // Functions parameters
    if (age > 18) {
        std::cout << "You're " << age << " years old. Please proceed." << std::endl;
    } else {
        std::cout << "Sorry, you're too young for this. No offense! " << std::endl;
    }
    return;
}

//@ Function that takes multiple parameters and returns the result of the computation
int max( int a, int b ){
    if( a > b ) return a;
    else return b;
}

//@ Function that doesnt' take parameters and returns nothing //- no input , no output
void say_hello(){
    std::cout << "Hello there" << std::endl;
    return; // You could omit this return statement for functions returning void
}

//@ Function that takes no parameters and return something
int lucky_number(){
    return 99;
}

//@ Function that do implicit convertion
//! function isgnature -> name + parameter list
int lucky_number(double a, double b){
    return a + b;
}
//! function isgnature -> name + parameter list
char lucky_number(double a, double b){
    return a + b;
}

//@ Parameters passed this way are scoped localy in the function. Changes to them are not visible outside the function. What we have inside the  passed to the function.
double increment_multiply( double a ,double b ) {
	
	std::cout << "Inside function , before increment : " << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
    
    double result = ((++a)  * (++b));
    
	std::cout << "Inside function , after increment : " << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
    
    //Returning the result
    return result;
}

int main()
{
    // Calling enter_bar
    enter_bar(22); // Function arguments weh it return nothing
    enter_bar(15);

    for (size_t i{1}; i < 20; ++i) {
        enter_bar(i);
    }
    // Calling max
    int x{22};
    int y{44};
    int result = max(100, 20); // Arguments
    result = max(x, y);
    std::cout << "max : " << result << std::endl;

    // Calling say_hello
    say_hello();

    // Calling lucy_number
    int result{lucky_number()};
    std::cout << "result : " << result << std::endl;

    double h{3.00};
    double i{4.00};

    std::cout << "Outside function , before increment : " << std::endl;
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;

    // Argumenmt Scope : AS Copy 
    double incr_mult_result = increment_multiply(h, i);
    std::cout << "Outside function , before increment : " << std::endl;
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;
    return 0;
}