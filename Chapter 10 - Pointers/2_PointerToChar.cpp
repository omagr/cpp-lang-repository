#include <iostream>

int main()
{
    
    //# ------- Dont allow to modify the string -----------
    // @it will spand it as an array of char or tobe very specific an arrya of const char
    const char *message{"Hello World!"}; // inilize w string 
    // - char pointer, if print it out diorectly we will get pur whole string itself
    std::cout << "message : " << message << std::endl;

    // @we want to change array of const char 
    //! *message = "B"; // Compiler error
    // - *message will point to the first char of array, means -'H' 
    std::cout << "*message : " << *message << std::endl;

    //# ------- Do allow to modify the string -----------
    char message1[]{"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;

    return 0;
}