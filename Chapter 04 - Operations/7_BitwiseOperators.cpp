
/*
DESCRIPTION	                                       OPERATOR
bitwise AND	                                        a & b
bitwise OR	                                        a | b
bitwise NOT	                                        ~a
bitwise XOR	                                        a ^ b
left shift	                                        a << b
right shift	                                        a >> b
*/

/*
The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.  
The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
The << (left shift) in C or C++ takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift. 
The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift. 
The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it.
*/  

#include <iostream>
int main() {
    int a {2};
    int b {6};

    std::cout << "a & b: " << (a & b)  << std::endl;
    std::cout << "a | b: " << (a | b)  << std::endl;
    std::cout << "~a: "    << (~a)     << std::endl;

    // how a number change in negative binary
    // s-1: convert to bin: 2 --> 00000000000000000000000000000010 (\4byte --> 32bits/)
    // s-2: take complement: 11111111111111111111111111111101
    // s-3: the msb is 1 so this number is neg --> 11111111111111111111111111111101 --> -ve
    // s-4: take 2's complement --> 11111111111111111111111111111101-->00000000000000000000000000000010+1
    // --> final --> 00000000000000000000000000000011 --> -3

    std::cout << "a ^ b: " << (a ^ b)  << std::endl;

    // right shift
    // --> a >> b --> a ko b bit tak right side me aage bda de 
    // padding(that new number which come in shifting time) starts from 0 in +ve
    // padding(that new number which come in shifting time) starts from compiler depend in -ve
    a={5}; b={6};
    std::cout << "a >> b: " << (a >> b)  << std::endl;
    // 5 --> 00000000000000000000000000000101 << 6 bit tak left me bada de
    // --> 00000000000000000000000000000000 --> 0
    a={-5}; b={2};
    std::cout << "a >> b: " << (a >> b)  << std::endl;

    // left shift
    // --> a << b --> a ko b bit tak left side me aage bda de 
    // padding(that new number which come in shifting time) starts from 0 in +ve
    // padding(that new number which come in shifting time) starts from compiler dependent in -ve
    a={5}; b={6};
    std::cout << "a << b: " << (a << b)  << std::endl;
    // 5 --> 00000000000000000000000000000101 << 6 bit tak left me bada de
    // --> 00000000000000000000000101000000 --> 320
    a={-5}; b={2};
    std::cout << "a << b: " << (a << b)  << std::endl;
    return 0;
}