#include <iostream>
using namespace std;

/*
Getter: A methods used to protect your data and make your code more secure. Getter returns the value (accessors), it returns the value of data type int, String, double, float, etc. For the program’s convenience, sole responsibility is to return the current data of a class field

Setter: A method to sets or updates the value (mutators). It sets the value for any variable used in a class’s programs. sole responsibility is to write to or modify a class field
*/

class Room {
private:
    int room_number;
public:
    float room_rent;
// getters
    int get_room_number () {
        return room_number;
    }
    float get_room_rent () {
        return room_rent;
    }
// setters 
    void set_room_number (int number) {
        room_number = number;
    }
    void set_room_rent (float rent) {
        room_rent = rent;
    }
};

int main()
{
    // creation of an object
    Room A;

    // accessing the setter
    A.set_room_number(69);
    A.set_room_rent(420.99);
    
    // accessing the getter
    cout << "Number: " << A.get_room_number() << endl;
    cout << "Rent: " << A.get_room_rent() << endl;

    return 0;
}