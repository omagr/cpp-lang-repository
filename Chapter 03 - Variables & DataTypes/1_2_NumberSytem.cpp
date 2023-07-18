#include <iostream>
#include <math.h>


int decTobin ( int  n) {
    int bin = 0;
    int i = 0; // n = 12
    while (n) {
        int digit = 0;
        digit = n % 2; //0 0 1 1
        bin = digit * pow(10,i) + bin; //0 0 100 1100
        n = n/2; //6 3 1 0
        i++; //0 1 2 3
        std::cout << "bin: " << bin << std::endl;
    }
    bin = 000000000000000000000000000000000 + bin;
    return bin;
}

int main() {
    std::cout << std::endl;

    // range of an integer
    int a = 2147483647;
    int b = -2147483647;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << decTobin(99) << std::endl;
    std::cout << "c: " << pow(10,3) << std::endl;

    std::cout << std::endl;
    return 0;
}