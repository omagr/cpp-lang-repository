
#include <bits/stdc++.h>
using namespace std;

class Room {
    // private
   int room_number;
   int room_rent;

public:
    // default constructor (no parameters)
   Room() {
      cout << "(1) called default constructor." << endl;
      cout << "(2) room_number: " << room_number << endl;
   }

    // Note: as you can see the dafult constrcutor got no value boz of bottom constrcxutor

   // Note: as you can see the bottom one is their only 
   
   // parameterized constructor (with parameters)
   Room(int room_number) {
      // why 69 not garbage value boz of scope of variable compiler choose room_number as the parameter over the it member itself.
      cout << "(3) this->room_number: " << this->room_number << endl;
      this -> room_number = room_number;
      cout << "(4) called parameterized constructor." << endl;
   };
   
   Room(int room_number, int room_rent) {
      cout << "(5) this->room_rent: " << this->room_rent << endl;
      this -> room_rent = room_rent;
      this -> room_number = room_number;
      cout << "(6) called parameterized constructor." << endl;
   }
   int get_room_number () {
    return room_number;
   }
   int get_room_rent () {
    return room_rent;
   }
};

int main() {
    cout << "(0) Before instantiation of object." << endl;
    Room A; // -> it will called default constrcutor
    Room A(69,90); // -> it will called parameterized constrcutor
    Room B(A); // -> it will called copy constrcutor
    cout << "(7) After instantiation of object." << endl;
    cout << "room number: " << A.get_room_number() << endl;
    cout << "room number: " << A.get_room_rent() << endl;

    return 0;
}


