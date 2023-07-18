#include <iostream>
#include <string>

// how get things in the program and how to get things out of the program
int main()
{

    // << = these sign give the idea how the flow of data is going from, in std::cout data goes from right to left. (not understand properly)
    // >> = these sign give the idea how the flow of data is going from, in std::cout data goes from left to right. (not understand properly)


    // std::cin = one way to read data from the console(terminal)
    int a, b, c;
    std::string d;

    std::cin >> a; // get data from the terminal
    std::cin >> b >> c; // get multiple data in one statment from the terminal
    std::getline(std::cin, d); // get data with spaces from the terminal

    // std::cout = one way to print data from the program to console (terminal)
    std::cout << "this is output!" << std::endl;
    std::cout << "value of a : " << a << std::endl << "value of b : " << std::endl << b << "value of c : " << c << std::endl; // you can think std::cout as the highway that takes  th data from the prgram to the console
    std::cout << "this is string : " << d << std::endl;

    // std::cerr = one way to print errors from the program to console(terminal)
    std::cerr << "this is error!" << std::endl;

    // std::clog = one way to print log messages from the program to console(terminal)
    std::clog << "this is log!" << std::endl;

    return 0;
}
