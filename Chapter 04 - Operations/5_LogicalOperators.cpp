
/*
DESCRIPTION	                                       OPERATOR
Logical NOT	                                        !a
Logical AND	                                        a && b
Logical OR	                                        a || b
*/

/*
a                    b                    !a                   a && b                   a || b
false              false                 true                  false                    false
false              true                  true                  false                    true
true               false                 false                 false                    true
true               true                  false                 true                     true
*/

/*
Logical Operators : Logical Operators are used to combine two or more conditions/constraints or to complement the evaluation of the original condition in consideration. The result of the operation of a logical operator is a Boolean value either true or false. If the expression is true, it returns 1 whereas if the expression is false, it returns 0.
*/  

#include <iostream>
int main() {
    /*
    If the operand is not bool, it is converted to bool using contextual conversion to bool.

    For the built-in logical NOT operator, the result is true if the operand is false. Otherwise, the result is false.

    For the built-in logical AND operator, the result is false if any of operand is false. Otherwise, the result is true. This operator is short-circuiting: if the first operand is false, the second operand is not evaluated

    For the built-in logical OR operator, the result is true if either of any operand (or both) is true. This operator is short-circuiting: if the first operand is true, the second operand is not evaluated.
    */

   	bool a {true};
    bool b {false};
    bool c {true};
	
	std::cout << std::boolalpha; // true / false
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;

	
	//AND : Evaluates to true when all operands are true.
	//      A single false operand will drag 
    //      the entire expression to evaluating false.
	
	std::cout << std::endl;
	std::cout << "Basic AND operations" << std::endl;

    std::cout << " a && b : " << (a && b) << std::endl; // false
    std::cout << " a && c : " << (a && c ) << std::endl; // true
    std::cout << " a && b && c :" << (a && b && c) << std::endl; // false


	//OR : Evaluates to true when at least one operand true.
	//      A single true operand will push 
    //      the entire expression to evaluating true.
	std::cout << std::endl;
	std::cout << "Basic OR operations" << std::endl;
    std::cout << " a || b : " << (a || b) << std::endl;
    std::cout << " a || c : " << (a || c ) << std::endl;
    std::cout << " a ||b || c :" << (a || b || c) << std::endl;


	//NOT : Negates whateve operand you put it with
	std::cout << std::endl;
	std::cout << "Basic NOT operations" << std::endl;	
	
	std::cout << "!a : " << !a << std::endl;
	std::cout << "!b : " << !b << std::endl;
	std::cout << "!c : " << !c << std::endl;



	//Combinations of all these operators
	std::cout << std::endl;
	std::cout << "Combining logical operators" << std::endl;
	// !(a &&b) || c
	std::cout << "!(a &&b) || c : " << (!(a &&b) || c) << std::endl; // true


    //Combining logical operators with relational operators
	int d{45};
	int e{20};
	int f{11};
	
	std::cout << std::endl;
	std::cout << "Relational and logic operations on integers" << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "f : " << f << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl; // true
	std::cout << "(d==e) || (e <= f ) : " << ((d==e) || (e <= f ) ) << std::endl;
	std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl;
	std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl;
	std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl;
	std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;
	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;
	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;
}