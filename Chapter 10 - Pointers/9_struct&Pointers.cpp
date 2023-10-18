#include <bits/stdc++.h>
using namespace std;

struct Node {
  int a;    // 4 + *4
  double b; // 8
  char c;   // 1 + *7
};

int main() {
  cout << "sizeof(Node): " << sizeof(Node) << "\n";

  //# Static instances
  struct Node A {
    0, 1.1, 'x'
  };
  Node *ptr = &A;
  cout << "ptr: " << ptr << "\n";
  cout << "ptr->a: " << ptr->a << ", ptr->c: " << ptr->c << "\n";

  //# dynamic instances
  Node *ptr1 = new Node();
  cout << "ptr1: " << ptr1 << "\n";
  Node *temp = ptr1;
  // delete ptr1;
  ptr1 = nullptr;
  cout << "temp->a: " << temp->a << ", temp->c: " << temp->c << "\n";
  return 0;
}