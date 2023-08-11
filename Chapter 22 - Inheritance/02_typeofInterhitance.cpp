#include<bits/stdc++.h>
using namespace std;

/*
 * Single Inheritance: When the derived class inherits only one base class, it is known as Single Inheritance
 * Multilevel Inheritance: When a derived(child) class inherits the base class and acts as the base class(parent class) to the other class
 * Multiple Inheritance: When a derived class(child class) inherits more than one base class(parent class), it is called multiple inheritance.
 * Hierarchical Inheritance: When more than one class is inherited from a single base class, it is called Hierarchical Inheritance.
 * Hybrid Inheritance: It is a combination of one or more types of inheritance.
 */

/*
 # Single Inheritance
 */
class Base {
  public:
  int salary = 900;
};
class Base1 {
  public:
  int age = 21
};
class Base2 {
  public:
  char[10] name = 'unkown';
};

/*
 # Single Inheritance
 */
class Derived_Single: public Base {
  public: 
    float bonus = 100;
    void sum() {
      cout << "Your Total Salary is: " << (salary + bonus) << endl;
    }
};

/*
 # Mutiple Inheritance
 */
class Derived_Mutiple: public Base1, public Base2 {
  public: 
    void sum() {
      cout << "Your Total Salary is: " << (salary + bonus) << endl;
    }
};

/*
 # Multilevel Inheritance
 */
class Derived_Multilevel: public Derived_Mutiple {public: int Count {10};};
// Here class is derived from another derived class.
class Derived_Multilevel2: public Derived_Multilevel {public: void print(){cout<< 'count : ' << count <<'\n';}};

/*
 # Hierarchical Inheritance
 */
// Class derived1 is derived from single_base_class.
class Derived_hir_1: public Base {
  public: 
    void product() {
      cout << "\nThe salary is= " << salary;
    }
};
// Class derived1 is also derived from class single_base_class.
class Derived_hir_2: public Base {
  public: 
    void sum() {
      cout << "\nThe salary is= " << salary;
    }
};

/*
 # Hynrid Inheritance
 */
class World {
  public:
    World() {
      cout << "This is World!\n";
    }
};
// Here is Single Inheritance.
class Continent: public World {
  public: 
    Continent() {
      cout << "This is Continent\n";
    }
};
class Country {
  public:
    Country() {
      cout << "This is the Country\n";
    }
};
// Here is multiple Inheritance.
class India: public Continent, public Country {
  public: 
    India() {
      cout << "This is India!";
    }
};


void Single_inheritance() {
  // Creating an object of the derived class.
  Derived x;
  // Gets the salary variable of Base class.
  cout << "Your Salary is:" << x.salary << endl;
  // Gets the bonus variable of the Derived class.
  cout << "Your Bonus is:" << x.bonus << endl;
  // Calls the mehtod of the Derived class.
  x.sum(); 
}

void Multiple_inheritance() {
  // Creating an object of the derived class and calling the sum() function.
  Derived_Mutiple x;
  x.sum(); 
}

void Multilevel_inheritance() {
   Derived_Multilevel2 x;
  x.print();
}
void Hierarchical_inheritance() {
  Derived_hir_2 x;
  Derived_hir_1 y;
  cout << x.salary << '\n';
  cout << y.salary << '\n';
  x.print();
} 

void  Hybrid_Inheritance() {
  India myworld;
}
