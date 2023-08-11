#include<bits/stdc++.h>
using namespace std;

/*
 * The capability of a class to derive properties and characteristics from another class is called Inheritance. 
 * Inheritance is a feature or a process in which, new classes are created from the existing classes. 
 * The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.
 * Existing Class = Base Class = Parent Class = Old Class
 * Derived Class = Child Class = New Class
 * When we say derived class inherits the base class, it means, the derived class inherits all the properties of the base class, without changing the properties of base class and may add new features to its own. 
 * These new features in the derived class will not affect the base class. The derived class is the specialized class for the base class.
 * Sub Class: The class that inherits properties from another class is called Subclass or Derived Class. 
 * Super Class: The class whose properties are inherited by a subclass is called Base Class or Superclass. 
 */

 
class Base {
  public:
  int salary = 900;
};

class Derived: public Base {
  public: 
    float bonus = 100;
    void sum() {
      cout << "Your Total Salary is: " << (salary + bonus) << endl;
    }
};

int main() {
  // Creating an object of the derived class.
  Derived x;
  // Gets the salary variable of Base class.
  cout << "Your Salary is:" << x.salary << endl;
  // Gets the bonus variable of the Derived class.
  cout << "Your Bonus is:" << x.bonus << endl;
  // Calls the mehtod of the Derived class.
  x.sum();
  return 0;
}