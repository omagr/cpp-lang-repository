#include <iostream>

int main() {
/*
Integer Modifires => Modifiers are used in C++ to change or give extra meaning to database types. It’s added to primitive data types as a prefix to change their meaning. A modifier is used to change the meaning of a basic type so that it better matches the requirements of different circumstances. There are different types of modifiers in C++, also known as data type modifiers. These modifiers in C++ are used with data types like int, char, and float preceding to them. These types of modifiers are useful for increasing and decreasing the memory size.
*/ 



/*

--------------------------------------------------------------------------------
Signed : is a modifier can apply to variable to signal that we have possiblity to store in positive, negative integers, and zero. it will still occupy 4 bytes of memeory. The sign takes 1 bit extra. So, if the unsigned value is being used then one-bit extra space is used to save the value of a variable

Modifires.         Size(Bits).              Range.                   
unsigned-int          4                 [ 0, 4294967295 ]
--------------------------------------------------------------------------------


--------------------------------------------------------------------------------
UnSigned : is a modifier can apply to variable to signal that we have possiblity store in non-negative integers only. it will still occupy 4 bytes of memeory. it gonna devide the range of unsigned int, the half is gonna left to store negative numbers and other half store postive ones

Modifires.         Size(Bits).              Range.                   
signed-int            4                [ -2147483, +2147483 ]
--------------------------------------------------------------------------------


--------------------------------------------------------------------------------
Short : Short modifies the minimum values that a data type can hold. It is used for small integers that lie in the range from −32,767 to +32,767. short is equivalent to short int. it will still occupy 2 bytes of memeory.

Modifires.         Size(Bits).              Range.                   
Short                  2               [ −32767, +32767 ]
--------------------------------------------------------------------------------


--------------------------------------------------------------------------------
Long : Long modifies the maximum values that a data type can hold. It is used for large integers that is in the range from -2147483647 to 2147483647. long-int is equivalent to long also. it will still occupy 8 bytes of memeory.

Modifires.         Size(Bits).              Range.                   
Long                 4 or 8               [ -2147483647, +2147483647 ]
--------------------------------------------------------------------------------

1. The modifiers for a datatype can be combined -> signed/unsigned can be used with long/short modifiers.
2. The long modifier can be used as twice as long long -> It is used for even larger numbers than long. However, long long type modifiers can only be used with int.
1. The modifiers for a datatype can be combined -> signed/unsigned can be used with long/short modifiers.
1. The modifiers for a datatype can be combined -> signed/unsigned can be used with long/short modifiers.
2. 


*/

// all combinations that can be made.
// note : those modifires can only be use on inetegal datatype

short                    short_var { -3279 };                   // 2
short int                short_int_var { 789 };
signed short             signed_short_var { 123 };
signed short int         signed_short_int_var { -789 };
unsigned short int       unsigned_short_int_var { 789 };


int                      int_var { 55 };                        // 4
signed                   signed_var { 66 };
signed int               signed_int_var { 77 };
unsigned int             unsigned_int_var { 77 };


long                     long_var { 88 };                       // 4 or 8
long int                 long_int_var { 33 };
signed long              signed_long_var { 55 };
signed long int          signed_long_int_var { 44 };
unsigned long int        unsigned_long_int_var { 44 };


long long                long_long_var { 888 };                 // 8
long long int            long_long_int_var { 999 };
signed long long         signed_long_long_var { 444 };
signed long long int     signed_long_long_int_var { 12345 };
unsigned long long int   unsigned_long_long_int_var { 12345 };

std::cout << "short_var : " << short_var << ", size: " << sizeof(short_var) << std::endl;
std::cout << "short_int_var : " << short_int_var << ", size: " << sizeof(short_int_var) << std::endl;
std::cout << "signed_short_var : " << signed_short_var << ", size: " << sizeof(signed_short_var) << std::endl;
std::cout << "signed_short_int_var : " << signed_short_int_var << ", size: " << sizeof(signed_short_int_var) << std::endl;
std::cout << "unsigned_short_int_var : " << unsigned_short_int_var << ", size: " << sizeof(unsigned_short_int_var) << std::endl;
std::cout << "int_var : " << int_var << ", size: " << sizeof(int_var) << std::endl;
std::cout << "signed_var : " << signed_var << ", size: " << sizeof(signed_var) << std::endl;
std::cout << "signed_int_var : " << signed_int_var << ", size: " << sizeof(signed_int_var) << std::endl;
std::cout << "unsigned_int_var : " << unsigned_int_var << ", size: " << sizeof(unsigned_int_var) << std::endl;
std::cout << "long_var : " << long_var << ", size: " << sizeof(long_var) << std::endl;
std::cout << "long_int_var : " << long_int_var << ", size: " << sizeof(long_int_var) << std::endl;
std::cout << "signed_long_var : " << signed_long_var << ", size: " << sizeof(signed_long_var) << std::endl;
std::cout << "signed_long_int_var : " << signed_long_int_var << ", size: " << sizeof(signed_long_int_var) << std::endl;
std::cout << "unsigned_long_int_var : " << unsigned_long_int_var << ", size: " << sizeof(unsigned_long_int_var) << std::endl;
std::cout << "long_long_var : " << long_long_var << ", size: " << sizeof(long_long_var) << std::endl;
std::cout << "long_long_int_var : " << long_long_int_var << ", size: " << sizeof(long_long_int_var) << std::endl;
std::cout << "signed_long_long_var : " << long_long_int_var << ", size: " << sizeof(long_long_int_var) << std::endl;
std::cout << "signed_long_long_int_var : " << signed_long_long_int_var << ", size: " << sizeof(signed_long_long_int_var) << std::endl;
std::cout << "unsigned_long_long_int_var : " << unsigned_long_long_int_var << ", size: " << sizeof(unsigned_long_long_int_var) << std::endl;


return 0;
}




// The following table shows various data types with modifiers and their size in bytes:

1. char: This datatype only allows signed and unsigned modifiers. When only char is used instead of signed char or unsigned char, this type is known as plain char. When performing numerical computations, it is preferred to utilize signed char or unsigned char instead of plain char. Character values should only be stored as plain char.


Modifier        Size(in Bytes)      Range 
char	            1               -128 to 127
signed char	        1               0 to 255
unsigned char	    1               -128 to 127


2. float and double: Double type can be used with the long modifier.

Modifier        Size(in Bytes)      Range                                       Precison
float	            4               3.4 × 10-38 to 3.4 × 1038 – 1               7
double	            8               1.7 × 10-308 to 1.7 × 10308 – 1             15
long double	        16              3.4 × 10-4932 to 3.4 × 104932 – 1           19

3. int: The signed, unsigned, long, and short modifiers can be used with integer types. The signed and unsigned modifiers can also be used as prefix to long or short modifiers. 

Modifier        Size(in Bytes)               Range
float	            4               
double	            8               
long double	        16               









--------------  Type qualifiers in C++ -------- is left.