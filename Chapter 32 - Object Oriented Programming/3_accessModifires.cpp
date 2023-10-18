#include <iostream>
#include <string>
using namespace std;
/*
Access modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding. Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members, that is they set some restrictions on the class members so that they can’t be directly accessed by the outside functions.

There are 3 types of access modifiers available in C++:

1. **Public**
2. **Private**
3. **Protected**

**Note: If we do not specify any access modifiers for the members inside the class, then by default the access modifier for the members will be Private.**
*/

class Public {
public:
    int room_number;
};

class Private {
private:
    int room_number;
};

int main()
{
    // creation of an object
    Public A;
    // accessing the propertise
    cout << "Property of A: " << A.room_number << endl;
    // size of the object 
    cout << "size of instance obj: " << sizeof(A) << endl;
    // creation of an object

    Private B;
    // accessing the propertise
    cout << "Property of B: " << B.room_number << endl;
    // size of the object 
    cout << "size of instance obj: " << sizeof(B) << endl;

    return 0;
}