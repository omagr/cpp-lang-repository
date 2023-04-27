#include <iostream> 

int main()
{   
    // compiler have the set of requirements that enforces on our code to be able to run successfully those requirements are the rules that we have to follow in order to genrate the exe file but if we break these rules then we will run in the problems and these prblm scome in the form of each of these errors or warnings.

    // there are 3 type of warning amd errors 

    /*
    1. Compile time errors : this errors come in the time of compilation and failed it to get the binary executable file. so this are the mostly typo errors
    */
    std::cout << "bhai ki choo, bete!" << std::endl

    /*
    2. Runtime errors : the compilation will succeed and get the exe file for sure, this errors come in the time of when the program is executaing and you dont get the result you intended it in the first place sometimes this run time errors fail and terminate the code immediately say the program has CRASHED, so these are the mostly logiacally errors.
    */
    int value = 9/0;
    std::cout << value << std::endl;

    /*
    3. Warnings : this is prioblem thatis not not enough serious for the compiler to halt compilation so this is basically compiler telling that you are doing something that has some problem and you should fixed it asap before it becomes a serious problem
    */
    int value = 9/0;
    
    return 0;
}

