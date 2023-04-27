#include <iostream>
using namespace std;

// creation of a empty class -> 1byte for indintification
class Empty_class {
    // empty
};

int main()
{
    // creation of an object
    Empty_class X;
    // output 
    cout << "size of an empty class (in byte): " << sizeof(X) << endl;

    cout << endl;
    return 0;
}