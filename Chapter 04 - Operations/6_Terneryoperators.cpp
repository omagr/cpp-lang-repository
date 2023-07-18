
/*
DESCRIPTION	                                       OPERATOR
ternery op                                          ?   :
*/

/*
Logical Operators : ?: operator returns one of two values depending on the result of an expression.
*/  

#include <iostream>
int main() {
    /*
    (expression 1) ? expression 2 : expression 3
    If expression 1 evaluates to true, then expression 2 is evaluated.
    If expression 1 evaluates to false, then expression 3 is evaluated instead.
    */

    std::cout << (0 > 5) ? "true" : "false";
}