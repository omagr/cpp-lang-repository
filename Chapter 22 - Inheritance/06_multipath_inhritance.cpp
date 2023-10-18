#include <bits/stdc++.h>
using namespace std;

// demostration w a dig
//* Human <- Tanya -> Freelancer
//* Human <- Tanya -> Fulltimer

class Human {
public:
  void whatTheyDo() { cout << "i am a Human!" << endl; };
};
class Fulltimer : public Human {
public:
  void whatTheyDo() { cout << "i have a 9 to 5 job!" << endl; };
};
class Freelancer : public Human {
public:
  void whatTheyDo() { cout << "i have clients!" << endl; };
};

// # virtual inhritance
class Tanya : public Freelancer, public Fulltimer {};

int main() {
  Tanya A;
  A.Human::whatTheyDo();
  return 0;
}

https
    : // www.youtube.com/watch?v=U0usxMpy_KE&list=PLk6CEY9XxSICITtoUG_mJIBShyIYpeaoi&index=7