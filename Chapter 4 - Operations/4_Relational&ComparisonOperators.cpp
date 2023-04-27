
/*
DESCRIPTION	                                       OPERATOR
equality operator	                                a == b
Not equal to operator	                            a != b
Less than operator	                                a < b
Greater than operator	                            a > b
Less than or equal to operator	                    a <= b
Greater than or equal to operator	                a >= b
three-way comparison operator                       a <=> b
*/

/*
Relational Operators: These are used for the comparison of the values of two operands. For example, checking if one operand is equal to the other operand or not, whether an operand is greater than the other operand or not. Of course, it's not just numeric constants that can be compared, but just any value, including, of course, variables. 
*/  

#include <iostream>
int main() {
    int number1 {1};
    int number2 {-1};

	std::cout << std::boolalpha;
    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
	
	std::cout << std::endl;
	std::cout << "Comparing variables" << std::endl;
	
    std::cout << std::boolalpha ; // Make bool show up as true/false instead of 1/0
	//Stress the need for parentheses here
    std::cout << "number1 < number2 : "     << (number1 < number2) << std::endl;
	std::cout << "number1 <= number2 : "    << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2 : "     << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2 : "    << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2 : "    << (number1 == number2) << std::endl;
    std::cout << "number1 != number2 : "    << (number1 != number2) << std::endl;

	std::cout << std::endl;
	std::cout << "store comparison result and use it later" << std::endl;
	
    // store comparison result and use it later
	bool result = (number1 == number2);
    
    std::cout <<  number1 << " == " << number2 << " : " << result <<  std::endl;
    return 0;
}