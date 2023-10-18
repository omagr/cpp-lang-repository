// It would be infinitely recursive if we passed the object by value. So, we pass on the object reference.
// In simple terms, we can say that a copy constructor is simply a parameterized constructor having a class object as its parameter. Using the copy constructor, we can initialize an object with another object of the same type.
#include <bits/stdc++.h>
using namespace std;

class Room {
    int room_number;
    int room_rent;

public:
    // constrcutor kisi object ke nhi blki class ke hote h
    // paramerterized constructor 
    Room(int room_number, int room_rent) {
        this->room_rent = room_rent;
        this->room_number = room_number;
        cout << "(1) called parameterized constructor." << endl;
    }
    // Copy constructor 
    Room(Room &add_of_reference_Class) {
        this->room_rent = add_of_reference_Class.room_rent;
        this->room_number = add_of_reference_Class.room_number;
        cout << "(2) called copy constructor." << endl;
    }

    void print() {
        cout << "this->number: " << this->room_number << endl;
        cout << "this->rent: " << this->room_rent << endl;
    }
};

int main()
{
    cout<<endl;

    Room A(69, 90);
    A.print();
/*
    Room B(A); // called in-built copy contsrcutor.
    B.print();
*/
    Room B(A); // called in-built copy contsrcutor.
    B.print();

    cout<<endl;
    return 0;
}
