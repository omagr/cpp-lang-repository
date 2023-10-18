#include <bits/stdc++.h>
using namespace std;

// demostration w a dig
//* Stdudent <- boy -> male
//* Stdudent <- Gril -> female

class Stdudent {
public:
  void whatTheyDo() { cout << "i am studying!" << endl; };
};
class Male {
public:
  void whatTheyDo() { cout << "i am doing work!" << endl; };
};
class Female {
public:
  void whatTheyDo() { cout << "i am washing utenlis!" << endl; };
};

class Girl : public Stdudent, public Female {};
class Boy : public Stdudent, public Male {};

int main() {
  Boy A;
  Girl B;
  A.Stdudent::whatTheyDo();
  A.Male::whatTheyDo();
  B.Stdudent::whatTheyDo();
  B.Female::whatTheyDo();
  return 0;
}