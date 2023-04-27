#include <iostream>

void main() {
/*
    int
    double
    float
    char
    bool void
    auto 

    what does it mean to put 1 in a variable
        bit >> 8 bits >> 1 bytes

    how to transform human's data to computer's data
        it done using number system
*/



/*
variable => it is a named piece of memeory that you use to store specific types of data, they are arbitrary names given to a memory location in the system. These memory locations addresses in the memory. Suppose we want to save our marks in memory. Now, these marks will get saved at a particular address in the memory. Now, whenever these marks will be updated, they will be stored at a different memory address. Thus, to facilitate the fetching of these memory addresses, variables are used. Variables are names given to these memory locations. The memory location referred to by this variable holds a value of our interest. Now, these variables once declared, are assigned some value. This assignment of value to these variables is called initialization of variables.

    Initialization of a variable is of two types:
        Static Initialization: Here, the variable is assigned a value in advance. This variable then acts as a constant.

        Dynamic Initialization: Here, the variable is assigned a value at the run time. The value of this variable can be altered every time the program is being run.
    
    Rules of naming conviction:
        1. name should only be start with alphabets(a...z) or underscore (_).
        
        2. after first letter you can use anything.

        3. variable name is case sensitive 
        
        4. no white space or special character allowed (except underscroe)
        
  
*/// --- Different ways of initializing a variable in Cpp --- 

 
// typename variable_Name = value; => genralise form 

// Method 1 (Declaring the variable and then initializing it)
int a;
a = 5; 


// Method 2 (Declaring and Initializing the variable together):
int b = 5; // Assingment Variable Initialization  


// Method 3 (Declaring multiple variables simultaneously and then initializing them separately)
int c, d;       
c = 5;         
d = 10;


// Method 4 (Declaring multiple variables simultaneously and then initializing them simultaneously)
int e, f;     
e = f = 10;  
int g, h = 10, i = 20;


// Method 5 (Initializing a variable using parenthesis)
int j (5); // Functional Variable Initialization
// Yes, they’re the same. On the other hand, for a class type they’re different. For example :
struct A { 
    A(int);
};
A j(5); // This statement is to construct a;


// Method 6 (Initializing a variable using braces)
int k {5};   // Braced Variable Initialization


// Method 7 (Declaring a variable using auto class)
auto l = 5; // ‘auto’ is a keyword which tells the compiler the type of the variable upon its initialization.


// Method 8 (Declaring and Initializing a variable through ‘auto’ keyword with parenthesis)
auto m (5);


// Method 9 (Declaring and Initializing a variable through ‘auto’ keyword with braces)
auto n {5};


// Method 10 (Dynamic Initialization : Value is being assigned to variable at run time.)
int o;
std::cin >> o;

// --- Different types of initializing a variable in Cpp --- 

int p; // Initializes to garbage value.
int q {}; // Initializes to zero.
int r {10}; // Initializes to ten.

// --- Different ways of expressions in initilizer --- 

int s { q + r - a }; // Initializes to garbage value.
int q {}; // Initializes to zero.
int r {10}; // Initializes to ten.

}