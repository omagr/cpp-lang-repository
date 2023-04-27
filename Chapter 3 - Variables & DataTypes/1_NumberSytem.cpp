/*

Number system: allow us to transform human convenient data to machine conveniebt dataa and also for reverse.
1. Binary Number system,
2. Octal Number system,
3. Hexadecimal Number system
4. Decimal Number system (not for this uses but yeah)

*every single digit is a bit.

-------------------------------------------------------------------------

Decimal Number system -> positional numeral system employing 10 as the base and requiring 10 different numerals, the digits 0, 1, 2, 3, 4, 5, 6, 7, 8, 9. It also requires a dot (decimal point) to represent decimal fractions.

123 -> [1 * (10^2)] + [2 * (10^1)] + [3 * (10^0)] -> 100 + 20 + 3 -> 123

-------------------------------------------------------------------------

Binary Number system -> its made of 0 and 1 only,  a number that is expressed in the binary system or base 2 numeral system. It describes numeric values by two separate symbols; 1 (one) and 0 (zero). The base-2 system is the positional notation with 2 as a radix.

01111011 -> (0 × 2⁸) + (1 × 2⁷) + (1 × 2⁶) + (1 × 2⁵) + (1 × 2⁴) + (0 × 2³) + (1 × 2²) + (1 × 2¹) + (1 × 2⁰) -> 123

-------------------------------------------------------------------------

Hexadecimal Number system -> Hexadecimal is a numbering system with base 16. It can be used to represent large numbers with fewer digits. In this system there are 16 symbols or possible digit values from 0 to 9, followed by six alphabetic characters -- A, B, C, D, E and F, it mostly use to shorten the length of binary number in memory, here 0x represt it is a hexa number.

0x 6E30F13F -> (6 × 16⁷) + (14 × 16⁶) + (3 × 16⁵) + (0 × 16⁴) + (15 × 16³) + (1 × 16²) + (3 × 16¹) + (15 × 16⁰) -> 0110 1110 0011 0000 1111 0001 0011 1111 -> 1848701247

-------------------------------------------------------------------------

Octal Number system -> The octal numbers, in the number system, are usually represented by binary numbers when they are grouped in pairs of three. For example, an octal number 128 is expressed as 0010102 in the binary system, where 1 is equivalent to 001 and 2 is equivalent to 010, here 0 represt it is a octal.

0 15614170477 -> 0x 6E30F13F -> 0110 1110 0011 0000 1111 0001 0011 1111 -> 1848701247

-------------------------------------------------------------------------

Decimal             Binary             Hexa         Octal
0                   0000               0            000 -> 0
1                   0001               1            001 -> 1
2                   0010               2            010 -> 2
3                   0011               3            011 -> 3
4                   0100               4            100 -> 4
5                   0101               5            101 -> 5
6                   0110               6            110 -> 6
7                   0111               7            111 -> 7
8                   1000               8            001 000 -> 10 (1+0)
9                   1001               9            001 001 -> 11 (1+1)
10                  1010               A            
11                  1011               B            
12                  1100               C            
13                  1101               D            
14                  1110               E            
15                  1111               F            

-------------------------------------------------------------------------

Digits(Bits)      Data range                                Bytes
1                   0 ~ 1
2                   0 ~ 3
3                   0 ~ 7
4                   0 ~ 15
5                   0 ~ 31
6                   0 ~ 63
7                   0 ~ 127
8                   0 ~ 255                                   1  
16                  0 ~ 65535                                 2
32                  0 ~ 4,294,967,295                         4
64                  0 ~ 18,446,744,073,709,551,615            8
n                   0 ~ 2^n - 1


*/

#include <iostream>

int main() {
    int Decimal         = 15;
    int Octal           = 017;
    int Hexadecimal     = 0x0f;
    int binary          = 0b00001111;

    std::cout << "Decimal number is : " << Decimal << std::endl;
    std::cout << "Octal number is : " << Octal << std::endl;
    std::cout << "Hexadecimal number is : " << Hexadecimal << std::endl;
    std::cout << "binary number is : " << binary << std::endl;
    return 0;
}

// all data is represented by a bunch of grouped cells of 0's and 1's in memory

// as the range of your data grows so will the number pf digit you need to represent the data in memeory

// hexadecimal system make  a liitle easier to handle streams of data with 1's and 0's 