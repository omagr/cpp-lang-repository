#include <iostream>

/*
 * Static variables in a Function: When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call.
 */

size_t dog_count{0}; // Global scope

unsigned int add_student()
{
    // The scope of this var is in add_student, but it's life time goes beyond the function execution.
    static unsigned int student_count{0};
    student_count++;
    ++dog_count;
    return student_count;
}

void do_something()
{
    //--student_count; // Compiler error
    ++dog_count;
}

int main()
{
    std::cout << "student count : " << add_student()  << std::endl; //1
    std::cout << "student count : " << add_student()  << std::endl; //2
    std::cout << "student count : " << add_student()  << std::endl; //3

    for (size_t i{}; i < 20; ++i)
    {
        std::cout << "student count : " << add_student() << std::endl;
    }
    return 0;
} 