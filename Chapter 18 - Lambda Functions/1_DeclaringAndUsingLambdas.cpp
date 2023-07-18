#include <iostream>

/*
 *C++ 11 introduced lambda expressions to allow inline functions which can be used for short snippets of code that are not going to be reused and therefore do not require a name. In their simplest form a lambda expression can be defined as follows:

 * [ capture clause ] (parameters) -> return-type {
 *      definition of method (body)
 * }
 */

int main()
{
    //# Declaring a lambda function
    auto func = []() { std::cout << "Hello World!" << std::endl; };

    //# calling it through a name
    func();
    func();

    //# Declare a lambda function and call it directly
    [](){ std::cout << "Hello World!" << std::endl; }();

    //# Lambda function that takes parameters
    [](double a, double b){ std::cout << "a + b : " << (a + b) << std::endl; }(10.0,50.0);

    //# Lambda function that takes parameters with a variable
    auto func1 = [](double a, double b){ std::cout << "a + b : " << (a + b)  << std::endl;};
    func1(10,20);
    func1(5,7);

    //# Lambda function that returns something
    auto result = [](double a, double b){ return a + b; }(10,60);
    std::cout << "result : " << result << std::endl;
    std::cout << "result : " << [](double a, double b){ return a + b;}(10,60) << std::endl;


    auto func2 = [](double a, double b) { return a + b; };
    auto result3 = func2(23,7);
    auto result4 = func2(9,45);
    std::cout << "result3 : " << result3 << std::endl;
    std::cout << "result4 : " << result4 << std::endl;
    std::cout  <<"direct call : " << func2(5,2) << std::endl;

    //# Explicitly specify the return type
    auto func3 = [](double a, double b) -> int
    {
        return a + b;
    };
    auto func4 = [](double a, double b)
    {
        return a + b;
    };

    double a{6.9};
    double b{3.5};

    auto result3 = func3(a, b);
    auto result4 = func4(a, b);

    std::cout << "result3 : " << result3 << std::endl;
    std::cout << "result4 : " << result4 << std::endl;
    std::cout << "sizeof(result3) : " << sizeof(result3) << std::endl; // 4
    std::cout << "sizeof(result4) : " << sizeof(result4) << std::endl; // 8

    std::cout << "Done!" << std::endl;

    return 0;
}