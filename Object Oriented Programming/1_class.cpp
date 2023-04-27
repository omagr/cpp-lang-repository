#include <iostream>
#include <string>
using namespace std;

/*
state, properties, methods
Class: Class is used to bind characteristics(variables) and functionality in one custom data type. When an object is created which belongs to that class, that object has all the characteristics and methods which were defined in the class and has their specific value according to that object.

Object: objects are the real-world entity around which our system revolves or in other words system is dependent on objects. In the hotel management system what all objects you can think of in a hotel?
– “Room” which can represents the rooms in that hotel

For example: in the hotel management system, to represent a room object in terms of class you have to define the properties & methods of the room. like,
properties ----
 room_number,
 room_rent,
 room_size,
 room_is_ac,
 room_status
 So every room will have some common characteristic properties but the values associated (such as 102 room number, 2000 Rs per night, XL size, AC room, Occupied) to these properties will change for every room independently. Such characteristics are referred to as properties of the object, and their values as state.

methods ----
 CheckIn,
 CheckOut,
 getRoomStatus,
 toggleStatus
 Similar to the properties, every room will also have some functionalities which are specific to that room only, which will help the system to access, fetch and update the values of the properties of the room. Such as, if a room has Status value equal to ‘Vacant’ and a new guest arrives and occupies that empty room.
 The system must update the status of the room from ‘Vacant’ to ‘Occupied’. So, to perform this update, the room must have a functionality, say, ‘toggleStatus’. The functionality of this function will be switching the status of the room between ‘Vacant’ and ‘Occupied’. All these types of functionalities (which update and fetch the characteristics values) are known as methods of the object.
*/

// creation of a class
class Room
{
// propertise
public:
    int room_number;
    float room_rent;
    char room_size;
    bool room_is_ac;
    string room_status;
// methods
    void CheckIn () {
        // do something
    };
    void CheckOut () {
        // do something
    };
};

int main()
{
    cout << endl;
    return 0;
}