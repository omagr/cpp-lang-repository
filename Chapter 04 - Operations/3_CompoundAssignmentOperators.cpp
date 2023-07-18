
/*
DESCRIPTION	                                       OPERATOR
simple assignment	                                a = b
addition assignment	                                a += b
subtraction assignment	                            a -= b
multiplication assignment	                        a *= b
division assignment	                                a /= b
modulo assignment	                                a %= b
bitwise AND assignment	                            a &= b
bitwise OR assignment	                            a |= b
bitwise XOR assignment	                            a ^= b
bitwise left shift assignment	                    a <<= b
bitwise right shift assignment	                    a >>= b
*/

/*
Compound Assignment Operators: Compound assignment operators modify the current value of a variable by performing an operation on it. They are equivalent to assigning the result of an operation to the first operand:
*/  

#include <iostream>
int main() {

 	int value;
    
    // simple assignment
    value = 25;
    std::cout << "The value is : " << value << std::endl;
    
    // addition assignment
    value += 5; //value +=5; // equivalent to value = value + 5
    std::cout << "The value is (after +=5) : " << value << std::endl; // 50

    // subtraction assignment
    value -= 5; // equivalent to value = value - 5
    std::cout << "The value is (after -=5) : " << value << std::endl; // 45 

    // multiplication assignment
    value *= 2;
    std::cout << "The value is (after *=2) : " << value << std::endl; // 90

    // division assignment
    value /= 3;
    std::cout << "The value is (after /=3) : " << value << std::endl; // 30

    // modulo assignment
    value %= 11;
    std::cout << "The value is (after %=11) : " << value << std::endl;// 8

    // bitwise AND assignment
    value &= 11;
    std::cout << "The value is (after %=11) : " << value << std::endl;// 8

    // bitwise OR assignment
    value |= 11;
    std::cout << "The value is (after %=11) : " << value << std::endl;// 8

    // bitwise XOR assignment
    value ^= 11;
    std::cout << "The value is (after %=11) : " << value << std::endl;// 8

    // bitwise left shift assignment
    value <<= 11;
    std::cout << "The value is (after %=11) : " << value << std::endl;// 8
    
    // bitwise right shift assignment
    value >>= 11;
    std::cout << "The value is (after %=11) : " << value << std::endl;// 8

    return 0;
}