#include <iostream>
#include <string>

int main() {

    /*
     *std::string
     *Concatenation, copy, serach
     */

    // Empty string
    std::string full_name;     
    // Initialize with string literal                         
    std::string planet{"Earth. Where the sky is blue"};
    // Initialize with other existing string
    std::string prefered_planet{planet};
    // Initialize with part of a string literal.             
    std::string message{"Hello there", 5}; // Contains hello
    // Initialize with multiple copies of a char contains eeee
    std::string weird_message(4, 'e');
    // Initialize with "Hello World"
    std::string greeting{"Hello World"};
    // Initialize with part of an existing std::string starting at index 6, taking 5 characters. Will contain World.
    std::string saying_hello{greeting, 6, 5}; 

    std::cout << "full_name : " << full_name << std::endl;
    std::cout << "planet : " << planet << std::endl;
    std::cout << "prefered_planet : " << prefered_planet << std::endl;
    std::cout << "message : " << message << std::endl;
    std::cout << "weird_message : " << weird_message << std::endl;
    std::cout << "greeting : " << greeting << std::endl;
    std::cout << "saying_hello : " << saying_hello << std::endl;

    // Changing std::string at runtime
    planet = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
    std::cout << "planet : " << planet << std::endl;

    // Use a raw array
    const char *planet1{"Earth. Where the sky is blue Earth."};
    // - so this pointer point to {} array 
    planet1 = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
    // - but we assign it to new array so old array is still here anste memory 
    std::cout << "planet1 : " << planet1 << std::endl;
    return 0;
}


// char 
// -> raw array with customs
// -> ctsring
// -> char cpointet
// -> heap char ponter aaray
// -> string