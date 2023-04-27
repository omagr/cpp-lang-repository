
/*
DESCRIPTION	                                       OPERATOR
addition                                               +
subtraction                                            -
multiplication                                         *
division                                               /
modulo                                                 %
preFix increment                                      ++a
postFix increment                                     a++
preFix decrement                                      --a
postFix decrement                                     a--
*/

/*
1. Arithmetic Operators: These operators are used to perform arithmetic/mathematical operations on operands. Examples: (+, -, *, /, %,++,–). Arithmetic operators are of two types: 
    a) Unary Operators: Operators that operate or work with a single operand are unary operators. For example: Increment(++) and Decrement(–) Operators
        int val = 5;
        ++val;  // 6

    b) Binary Operators: Operators that operate or work with two operands are binary operators. For example: Addition(+), Subtraction(-), multiplication(*), Division(/) operators.
*/  

#include <iostream>
int main() {
    int a = 1, b = 2;
    int c;

    // addition
    c = a + b; 
    std::cout << "a + b : " << a + b << std::endl;
    
    // subtraction
    c = a - b; 
    std::cout << "a - b : " << a - b << std::endl;
    
    // multiplication
    c = a * b; 
    std::cout << "a * b : " << a * b << std::endl;
    
    // division
    c = a / b; 
    std::cout << "a / b : " << a / b << std::endl; // ----> no fractional value in int
    
    // modulo
    c = a % b; 
    std::cout << "a % b : " << a % b << std::endl; // ----> no work in fractional value

    // postfix increment
    std::cout << "c (before increment) : " << c++ << std::endl;
    std::cout << "c (after increment) : " << c << std::endl;
    
    // postfix decrement
    std::cout << "c (before decrement) : " << c-- << std::endl;
    std::cout << "c (after decrement) : " << c << std::endl;
    
    // prefix increment
    ++c;
    std::cout << "c (after increment) : " << c << std::endl;
    
    // prefix decrement
    --c;
    std::cout << "c (after decrement) : " << c << std::endl;
    

    

/*
bitwise NOT	~a	Yes	T T::operator~() const;	T operator~(const T &a);
bitwise AND	a & b	Yes	T T::operator&(const T2 &b) const;	T operator&(const T &a, const T2 &b);
bitwise OR	a | b	Yes	T T::operator|(const T2 &b) const;	T operator|(const T &a, const T2 &b);
bitwise XOR	a ^ b	Yes	T T::operator^(const T2 &b) const;	T operator^(const T &a, const T2 &b);
bitwise left shift	a << b
*/
    return 0;
}

/*
resources: https://en.cppreference.com/w/cpp/language/operator_arithmetic
*/
