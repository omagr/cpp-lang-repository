#include <bits/stdc++.h>
using namespace std;

class Base3 {
public:
  int salary;
  void work() { cout << "Base 3 work"; };
  Base3(int x) { salary = x; };
};

class Base4 {
public:
  int bonus;
  void work() { cout << "Base 4 work"; };
  Base4(int y) { bonus = y; };
};

class Derived_Mutiple_Parameter : public Base3, public Base4 {
public:
  // that constrcutor 
  Derived_Mutiple_Parameter(int x, int y) : Base3(x), Base4(y) {
    cout << "Derived_Mutiple_Parameter";
  };
  void sum() { cout << "Your Total Salary is: " << (salary + bonus) << endl; };
};

int main() {
  //* calling paramteraized constrcutor in bot parent classs
  Derived_Mutiple_Parameter x(50, 50);
  x.sum();
  //* calling same function in both class
  // x.work(); //! error: request for member 'work' is ambiguous

  // #1 -> explicitly calling the class
  x.Base3::work();
  x.Base4::work();

  // #2 -> by slicing (typeCatsing)
  Base3 y = x; //# so it will cope only those items from x which belongs to
               // particular class
  Base4 z = x; //# so it will cope only those items from x which belongs to
               // particular class
  y.work();
  z.work();
  return 0;
}