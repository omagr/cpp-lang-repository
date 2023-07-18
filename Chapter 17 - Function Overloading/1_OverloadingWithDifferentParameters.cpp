#include <iostream>

/*
 * You Just need to make sure that parameter is defferent in some way!
 *
 * Order  - (int a, duble b) != (duble a, int b)
 * Number - (int a, int b) != (int a, int b, int c)
 * Types  - (int a) != (double a)
 * Name   - Func A  != Func B
 */

int max(int a, int b){
    std::cout << "int overload called" << std::endl;
    return (a>b)? a : b; 
}

// ! it will not work because of function signature
// double max(int a, int b){
//     std::cout << "int overload called" << std::endl;
//     return (a>b)? a : b; 
// }

double max(double a, double b){
    std::cout << "double overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(int a, double b){
    std::cout << "(int,double) overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(double a, int b){
    std::cout << "(double,int) overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(double a, int b,int c){
    std::cout << "(double,int,int) overload called" << std::endl;
    return a;
}

std::string_view  max(std::string_view a, std::string_view b){
    std::cout << "(string_view,string_view) overload called" << std::endl;
    return (a>b)? a : b;
}

int main(){
    int x{4};
    int y{9};
    double a{5.4};
    double b{7.4};
    auto result = max(b,x,y);
    max("Hello","World");
    return 0;
}