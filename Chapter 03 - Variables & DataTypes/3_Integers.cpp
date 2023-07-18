#include <iostream>

int main() {
/*
Integer (int) => it is a datatype that is use to store whole numbers (A whole number is simply any positive number that does not include a fractional or decimal part. This means that, for example, the numbers 0, 1, 2, 3, 4, 5, 6, and 7 are all whole numbers. Numbers such as -3, 2.7, or 3 ½ are not whole numbers), they typically occupy 4 bytes in memory.
*/

int a;                      // Initializes to garbage value.
int b {};                   // Initializes to zero.
int c (1), d {9}, e = 10;   // Functional Initialization, Braced Initialization, Assingment Initialization

int f = d + c;              // expressions in assingment initializer
int i { e + f - b };        // expressions in braced initilizer.
int j ( b + c - a );        // expressions in functional Initialization.

int k {2.9};                // 2.9 is type of duble, with a wider range than of int, gonna give EARNING or ERROR.
int l (2.9);                // it chop the fractional part so -> 2, gonna implicit converstion
int m = 2.9;                // information lost, less safe than braced initializers, gonna implicit converstion

// output 
std::cout << "a : " << a << ", size: " << sizeof(a) << std::endl;
std::cout << "b : " << b << ", size: " << sizeof(b) << std::endl;
std::cout << "c : " << c << ", size: " << sizeof(c) << std::endl;
std::cout << "d : " << d << ", size: " << sizeof(d) << std::endl;
std::cout << "e : " << e << ", size: " << sizeof(e) << std::endl;
std::cout << "f : " << f << ", size: " << sizeof(f) << std::endl;
std::cout << "i : " << i << ", size: " << sizeof(i) << std::endl;
std::cout << "j : " << j << ", size: " << sizeof(j) << std::endl;
std::cout << "k : " << k << ", size: " << sizeof(k) << std::endl;
std::cout << "l : " << l << ", size: " << sizeof(l) << std::endl;
std::cout << "m : " << m << ", size: " << sizeof(m) << std::endl;

return 0;
}