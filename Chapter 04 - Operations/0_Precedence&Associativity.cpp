  
/*
@Precedence: If there are multiple operators in a single expression, the operations are not evaluated simultaneously. Rather, operators with higher precedence have their operations evaluated first. eg,
    int x = 5 - 17 * 6; 
    Here, the multiplication operator * is of higher level precedence than the subtraction operator -. Hence, 17 * 6 is evaluated first.
    As a result, the above expression is equivalent to
    int x = 5 - (17 * 6);
    If we wish to evaluate 5 - 17 first, then we must enclose them within parentheses:
    int x = (5 - 17) * 6;
*/

/*
@Associativity: Operator associativity is the direction from which an expression is evaluated. eg,
    int a = 1;
    int b = 4; // a will be 4
    a = b;
    Take a look at a = 4; statement. The associativity of the = operator is from right to left. Hence, the value of b is assigned to a, and not in the other direction.
*/

/*
@notes:
    -1. Precedence and associativity are compile-time concepts and are independent from order of evaluation, which is a runtime concept.
    -2. Because there are a lot of operators in C++ with multiple levels of precedence, it is highly recommended to use brackets()
    -3. multiple operators can have the same level of precedence (as we can see from the above table). When multiple operators of the same precedence level are used in an expression, they are evaluated according to their associativity.
    !- you have to use somethinglike this
    #std::cout << " a || b : " << (a || b) << std::endl;
    #std::cout << " a || b : " << (a == b) << std::endl;
    because << have higher Precedence than any of these operatpors so we use ()
*/

/*
Operator            Description                        Operator               Associativity


Group-lvl 1 	    Scope resolution	                  ::                        no

Group-lvl 2	        Member selection	                . or ->               Left-to-right ➔
                    (object or pointer)
                    Array subscript	                      a[]	
                    Function call	                      a()	
                    Postfix/Suffix increment	          a++	
                    Postfix/Suffix decrement	          a--	
                    Type name	                	    typeid	
                    Constant type conversion	        const_cast	
                    Dynamic type conversion	            dynamic_cast	
                    Reinterpreted type conversion	    reinterpret_cast	
                    Static type conversion	            static_cast	
                    Functional cast		                type(), type{}

Group-lvl 3 		Size of object or type	            sizeof	               Right-to-left <-
                    Create object	                     new	
                    Destroy object	                    delete	
                    await-expression                   co_await
                    Prefix increment	                  ++a	
                    Prefix decrement	                  --a	
                    bitwise NOT	                          ~
                    Logical NOT	                          !
                    Unary negation	                      -a
                    Unary plus	                          +a
                    Address-of	                          &a
                    Indirection	                          *a
                    C-style cast		                  (type)	

Group-lvl 4 		Pointer-to-member              	   .* or ->*               Left-to-right ➔
                    (objects or pointers)

Group-lvl 5	        Multiplication                         *                   Left-to-right ➔
                    Division                               /	
                    Modulus                                %	

Group-lvl 6		    Addition	                           +                   Left-to-right ➔
                    Subtraction	                           -	

Group-lvl 7	        Left shift	                           <<                  Left-to-right ➔
                    Right shift	                           >>	

Group-lvl 8	        Three-way comparison operator         <<=>>                Left-to-right ➔

Group-lvl 9	        Less than	                           <                   Left-to-right ➔
                    Greater than	                       >	
                    Less than or equal to	               <=	
                    Greater than or equal to	           >=	

Group-lvl 10        Equality	                           ==	               Left-to-right ➔
                    Inequality	                           !=

Group-lvl 11        Bitwise AND	                           &                   Left-to-right ➔

Group-lvl 12	    Bitwise exclusive OR	               ^                   Left-to-right ➔

Group-lvl 13	    Bitwise inclusive OR	               |                   Left-to-right ➔

Group-lvl 14	    Logical AND	                           &&                  Left-to-right ➔

Group-lvl 15	    Logical OR	                           ||                  Left-to-right ➔

Group-lvl 16	    Ternery Conditional	                   ? :	               Right-to-left <-
                    Assignment	                           =	
                    Multiplication assignment	           *=	
                    Division assignment	                   /=	
                    Modulus assignment	                   %=	
                    Addition assignment	                   +=	
                    Subtraction assignment	               -=	
                    Left-shift assignment	               <<=	
                    Right-shift assignment	               >>=	
                    Bitwise AND assignment	               &=
                    Bitwise inclusive OR assignment	       |=
                    Bitwise exclusive OR assignment	       ^=
                    throw expression	                   throw	

Group-lvl 17        Comma	                                ,                  Left-to-right ➔
*/

#include <iostream>
int main () {
    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};
        
    int result = a + b * c -d/e -f + g;     // 6 +  24 - 3 - 2 + 5
    std::cout << "result : " << result << std::endl;

    result = a/b*c +d - e + f;              // 16 + 9 - 3 + 2
    std::cout << "result : " << result << std::endl;

    result = (a + b) * c -d/e -f + g;       // 72 - 3 - 2 + 5
    std::cout << "result () : " << result << std::endl;
    return 0;
}