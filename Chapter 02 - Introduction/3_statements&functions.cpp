#include <iostream> // standard library's feature

int Statements()
{
    /*
    Statment:
        a staements is basic unit of compulation in a cpp prg

        every cpp prg has collection of statments in a certain way to archeive some goal

        statements ends with a semicolon (;)

        statments are execuatble in order from top to bottom when program is run

        execuating keeps going until there is a statements causing the prigran to terminate, or run another sequence of staments.
    */

    int a = 9;     // statements one
    int b = 1;     // statements two
    int c = a + b; // statements three
    return c;      // statements four
}

// function define
int Functions(int parameter_1, int parameter_2)
{
    /*
    Function:
        it like machine you give it some input and it genrates the output

        function must be defined before it is use

        you cant nested functions in main function
    */
    int result = parameter_1 + parameter_2;
    return result;
}

int main()
{
    // statement
    int a{9};

    // function call
    std::cout << "result = " << Statements() << std::endl;
    std::cout << "result = " << Functions(a, 1) << std::endl;
    std::cout << "result = " << Functions(a, a) << std::endl;
    std::cout << "result = " << Functions(9, 1) << std::endl;
    return 0;
}
