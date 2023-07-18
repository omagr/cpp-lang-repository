/*
Type Inference : refers to automatic deduction of the data type of an expression in a programming language. Before C++ 11, each data type needed to be explicitly declared at compile-time, limiting the values of an expression at runtime but after the new version of C++, many keywords are included which allows a programmer to leave the type deduction to the compiler itself. With type inference capabilities, we can spend less time having to write out things the compiler already knows. As all the types are deduced in the compiler phase only, the time for compilation increases slightly but it does not affect the run time of the program.

    1) auto keyword: The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer. In the case of functions, if their return type is auto then that will be evaluated by return type expression at runtime. Good use of auto is to avoid long initializations when creating iterators for containers.

    Note:
        1. When using the auto keyword with variables, the variable should be declared and initialized together. If the variable is not initialized with a value, the code will give a compile-time error as it will not be able to analyze the variable's data type because there is no value assigned to it.

        2. As mentioned before, the auto keyword is not only limited to variables. We can also use it as the return type for a function.

        3. auto becomes int type if even an integer reference is assigned to it. To make it reference type, we use auto &.

        4. Good use of auto is to avoid long initializations when creating iterators for containers.

        5. The auto keyword is used with only those functions which are declared and defined in the same block. The reason is the same as that for variables, the compiler would not be able to decide the data type of the return variable if there is no function definition.*

    Typeid : an operator which is used where the dynamic type of an object needs to be known. typeid(x).name() returns the data type of x, for example, it return ‘i’ for integers, ‘d’ for doubles, ‘Pi’ for the pointer to integer etc. But the actual name returned is mostly compiler dependent.
*/

#include <iostream>

    // Auto Used with Functions
    auto m() {
        return 0;
    }

int main()
{

    // Auto Used with data types
    auto a = 2;
    auto b = 'b';
    auto c = 2.69;
    auto i = "store";
    auto d = 6.7f;
    auto e = 66l;

    // Auto Used with integer modifires
    auto f = 123u; // unsigned
    auto g = 123ul; // unsigned long
    auto h = 123ll; // longlomng 

    // Auto Used with Pointers
    auto j = &b;

    // Auto with booleans
    auto k = true;

    // Auto Used with Const Variables
    const auto l = 420;

    // We have used typeid for getting the type of the variables.
    std::cout << "a : " << a << ", size : " << sizeof(a) << ", dataType : " << typeid(a).name() << std::endl; 
    std::cout << "b : " << b << ", size : " << sizeof(b) << ", dataType : " << typeid(b).name() << std::endl;
    std::cout << "c : " << c << ", size : " << sizeof(c) << ", dataType : " << typeid(c).name() << std::endl;
    std::cout << "d : " << d << ", size : " << sizeof(d) << ", dataType : " << typeid(d).name() << std::endl;
    std::cout << "e : " << e << ", size : " << sizeof(e) << ", dataType : " << typeid(e).name() << std::endl;
    std::cout << "f : " << f << ", size : " << sizeof(f) << ", dataType : " << typeid(f).name() << std::endl;
    std::cout << "g : " << g << ", size : " << sizeof(g) << ", dataType : " << typeid(g).name() << std::endl;
    std::cout << "h : " << h << ", size : " << sizeof(h) << ", dataType : " << typeid(h).name() << std::endl;
    std::cout << "i : " << i << ", size : " << sizeof(i) << ", dataType : " << typeid(i).name() << std::endl;
    std::cout << "j : " << j << ", size : " << sizeof(j) << ", dataType : " << typeid(j).name() << std::endl;
    std::cout << "k : " << k << ", size : " << sizeof(k) << ", dataType : " << typeid(k).name() << std::endl;
    std::cout << "l : " << l << ", size : " << sizeof(l) << ", dataType : " << typeid(l).name() << std::endl;
    std::cout << "dataType of func m : " << typeid(m).name() << std::endl;

    return 0;
}

// --------------  decltype Keyword -------- is left.