#include <iostream>
#include <string>
using namespace std;

// creation of a class
class Room
{
// propertise
    int room_number;
    float room_rent;
    char room_size;
    bool room_is_ac;
    string room_status;
};

int main()
{
    // creation of an object
    Room A;

    // accessing the propertise
    cout << "Property: " << A.room_number << endl;

    // assigning vlaues to object instance vars
    A.room_number = 100;
    A.room_rent = 1299;
    A.room_size = 'S';
    A.room_is_ac = false;
    A.room_status = "vacant";

    // size of the object 
    cout << "size of instance obj: " << sizeof(A) << endl;

    return 0;
}