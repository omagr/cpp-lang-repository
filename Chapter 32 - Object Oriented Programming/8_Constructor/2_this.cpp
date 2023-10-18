// this keyword in C++ is an implicit pointer that points to the object of the class of which the member function is called. Every object has its own this pointer. Every object can reference itself by this pointer

// that means this will point to the current object address 

#include <bits/stdc++.h>
using namespace std;

class Room {
    // private
   int room_number;

public:
    // default constructor (no parameters)
   Room() {
      cout << "(1) called default constructor." << endl;
      cout << "(2) room_number: " << room_number << endl;
   }

    // Note: as you can see the dafult constrcutor got no value boz of bottom constrcxutor

   // parameterized constructor (with parameters)
   Room(int room_number) {
      // why 69 not garbage value boz of scope of variable compiler choose room_number as the parameter over the it member itself.
      cout << "(3) room_number: " << room_number << endl;
      // now print the address of object using this.
      cout << "(4) This: " << this << endl;
      // now print the member of object using this.
      cout << "(5) this->room_number: " << this->room_number << endl;
      this -> room_number = room_number;
      cout << "(6) called parameterized constructor." << endl;
   }
   int get_room_number () {
    return room_number;
   }
};

int main() {
    cout << "(0) Before instantiation of object." << endl;
    Room A(69);
    cout << "(7) address of object: " << &A << endl;
    cout << "(8) After instantiation of object." << endl;
    cout << "room number: " << A.get_room_number() << endl;

    return 0;
}


