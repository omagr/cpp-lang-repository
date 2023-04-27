#include <bits/stdc++.h>
using namespace std;

class Room {
    // private
   int room_number;

public:
   // parameterized constructor (with parameters)
   Room(int value) {
      room_number = value;
      cout << "(1) called default constructor of the Room class, to initialize the object." << endl;
   }
   int get_room_number () {
    return room_number;
   }
};

int main() {
    cout << "(0) Before instantiation of object." << endl;
    Room A(69);
    cout << "(2) After instantiation of object." << endl;
    cout << "room number: " << A.get_room_number() << endl;

    return 0;
}


