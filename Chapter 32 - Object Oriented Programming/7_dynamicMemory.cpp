#include <iostream>
using namespace std;


class Room {
private:
    int room_number;
public:
    float room_rent;

    float get_room_number () {
        return room_number;
    }

    void set_room_number (float rent) {
        room_number = rent;
    }
};

int main()
{
    // dynamically allocation
    // create a pointer pointing to the first memory block created in heap
    // note: when pointing the pointer to any class instance use only this method 
    Room *Ptr = new Room;

    // accessing the setter
    // defrencing the pointer to know the what is there at that location and setting up
    Ptr->room_rent = 420.90; // 1st type -> derefrence operator
    (*Ptr).set_room_number(99); // 2nd type -> arrow operator
    
    // accessing the getter
    // defrencing the pointer to know the what is there at that location and segetting up
    cout << "Number: " << Ptr->room_rent << endl;
    cout << "Rent: " << (*Ptr).get_room_number() << endl;

    return 0;
}