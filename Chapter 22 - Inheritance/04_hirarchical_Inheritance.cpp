#include <bits/stdc++.h>
using namespace std;

// example

class Human {
public:
  walk() { cout << "i am walking\n"; };
};

class engineer : public Human {};
class doctor : public Human {};
class entreprenur : public Human {};

int main() {
  engineer e;
  e.walk();
  doctor d;
  d.walk();
  entreprenur b;
  b.walk();
  return 0;
}