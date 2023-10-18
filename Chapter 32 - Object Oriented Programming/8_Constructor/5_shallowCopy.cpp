
#include <bits/stdc++.h>
using namespace std;

class Room
{
    int room_number;
    int room_rent;
    char *type;

public:
    // default constrctor
    Room()
    {
        type = new char[10];
        cout << "(0) called parameterized constructor." << endl;
    }
    // paramerterized constrctor
    Room(int room_number, int room_rent, char)
    {
        this->room_rent = room_rent;
        this->room_number = room_number;
        type = new char[10];
        cout << "(1) called parameterized constructor." << endl;
    }
    // Copy constructor
    Room(Room &add_of_reference_Class)
    {
        this->room_rent = add_of_reference_Class.room_rent;
        this->room_number = add_of_reference_Class.room_number;
        cout << "(2) called copy constructor." << endl;
    }

    void print()
    {
        cout << "this->number: " << this->room_number << endl;
        cout << "this->rent: " << this->room_rent << endl;
        cout << "this->type: " << this->type << endl;
    }
    void setType(char value[])
    {
        strcpy(this->type, value);
    }
    void setNumber(int number)
    {
        this->room_number = number;
    }
    void setRent(int rent)
    {
        this->room_rent = rent;
    }
};

int main()
{
    cout << endl;

    Room A;
    A.setNumber(13);
    A.setRent(1200);
    char name[5] = "3BHK";
    A.setType(name);
    A.print();
    cout << "------ A is done -------" << endl;

    Room B = A;
    B.print();
    cout << "------ B is done -------" << endl;
    cout << "so, B <-- A" << endl;

    name[5] = "4BHK";
    A.setType(name);
    A.print();
    cout << "------ A is done -------" << endl;

    B.print();
    cout << "------ B is done -------" << endl;

    cout << endl;
    return 0;
}
