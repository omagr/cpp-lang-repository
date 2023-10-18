#include <bits/stdc++.h>

using namespace std;

//# (a) we have the initial prototype of node here,
struct Node {
  int data {};
  Node * next;
};
Node * head; //# (b) now we have the global head ptr,

//# (c) func to inserting elements in ll,
void Insert_At_Last(int value);
void Insert_At_Beginning(int value);
void Insert_At_Nth(int value, int pos);
void Delete_At_Nth(int pos);
void Itreative_Reverse();
void Recurrsive_Reverse_Traversing(Node * ptr);
void Recurrsive_Reverse(Node * ptr);
void Traversing();

int main() {
  head = nullptr; // empty list at start,

  Insert_At_Nth(-1, 1);
  Insert_At_Beginning(-3);
  int n = 3;
  for (int i = 0; i < n; i++) {
    Insert_At_Last(i);
  };
  // Traversing();
  Insert_At_Beginning(-2);
  // Traversing();           // -2 -3 -1 0 1 2

  Insert_At_Nth(-4, 1); // -4 -2 -3 -1 0 1 2
  Insert_At_Nth(9, 4); // -4 -2 -3 9 -1 0 1 2
  Insert_At_Nth(7, 6); // -4 -2 -3 9 -1 7 0 1 2
  // Traversing();

  Delete_At_Nth(2); // -4 -3 9 -1 7 0 1 2
  Delete_At_Nth(4); // -4 -3 9 7 0 1 2
  Delete_At_Nth(1); // -3 9 7 0 1 2

  Traversing();

  Itreative_Reverse(); //- 2 1 0 7 9 -3
  cout << "\nthe Itreative_Reverse linked list: ";
  Traversing();

  cout << "\nthe Recurrsive Reverse travering linked list: ";
  Recurrsive_Reverse_Traversing(head);
 
  Traversing();
  Recurrsive_Reverse(head);
  cout << "\nthe Recurrsive_Reverse linked list: ";
  Traversing();

  return 0;
};

void Insert_At_Last(int value) {
  //# (a) tempropray ptr to hold the add until it reach out to right place,
  Node * temp {
    nullptr
  };
  //# (b) create a new node here,
  temp = new Node();
  //# (c) now initialize w value,
  temp -> data = value;
  temp -> next = nullptr;
  //# (d) check if its a very first node or not,
  if (head == nullptr) {
    //# (e) yes, it is so now we will point out the head to it, 
    head = temp;
  } else {
    //# (f) no, so now we will create another temp ptr and loop it thriugh complete ll, to get the last element,
    Node * last = head;
    //# (g) agar ye last node h so the next will be nullptr,
    while (last -> next != nullptr) {
      last = last -> next; //# (h) forwording it to next node
    };
    //# (i) now when we have the last element we just simply forword it to out temp node,
    last -> next = temp;
  }
};

void Insert_At_Beginning(int value) {
  //# (a) tempropray ptr to hold the add until it reach out to right place,
  Node * temp {
    nullptr
  };
  //# (b) create a new node here,
  temp = new Node();
  //# (c) now initialize w value,
  temp -> data = value;
  temp -> next = nullptr;
  if (head != nullptr) temp -> next = head;
  head = temp;
};

void Insert_At_Nth(int value, int pos) {
  /**
   ** Special Cases
   *- list could be empty
   *- the given position could be invalid
   *- we want to add it on first place
   * pos starts w 1
   * index strats w 0
   */
  //# (a) fisrt we will create and inilize a node, 
  Node * temp = new Node();
  temp -> next = nullptr;
  temp -> data = value;
  //# (b) now we will check teh given pos if,
  if (pos == 1) {
    //# (c) its 1 then, the temp will point to head no matter its null or what
    temp -> next = head;
    head = temp; //# and temp will eventually become head
    return;
  }
  Node * prevNode = head; //# to hold the n-1 node
  //# (d) its not 1 then, we will first of get the n-1 node,
  for (int i = 1; i < pos - 1; i++) {
    prevNode = prevNode -> next;
  };
  //# (e) now we will,
  temp -> next = prevNode -> next; //# the temp will point out to nTh node (old)
  prevNode -> next = temp; //# the n-1 node will point out to nTh node (new)
};

void Delete_At_Nth(int pos) {
  Node * prevNode = head;
  if (pos == 1) {
    head = head -> next;
    delete prevNode;
    return;
  }
  for (size_t i = 1; i < pos - 1; i++) {
    prevNode = prevNode -> next;
  }
  Node * temp = prevNode -> next; // point to the crr node or given node
  prevNode -> next = temp -> next;
  delete temp;
}

void Traversing() {
  cout << "\nthe linked list: ";
  //# (a) no, so now we will create another temp ptr and loop it thriugh complete ll, to get the last element,
  Node * temp = head;
  //# (b) agar ye last node h so the next will be nullptr,
  while (temp != nullptr) {
    cout << temp -> data << " ";
    temp = temp -> next; //# (c) forwording it to next node
  };
};

void Itreative_Reverse() {
  //# (a) we will create three pointers,
  /**
   * -prv: will always hold the previous node in order to redirect ->next to it,
   * -next will awlays hold next node in order to not loose link list access,
   * -crr: hold current node to perform operations,
   */
  Node * prv, * nxt, * crr;
  prv = nullptr; //- at first we made it to null so it can be treated as last node pointer later
  crr = head; //- ofc a strating point

  while (crr != nullptr) {
    //# (b) first, we get the next node, then
    nxt = crr -> next;
    //# (c) second, we point out the crrent node to previous node not next, then
    crr -> next = prv;
    //# (d) third, we make the prv to crrent node for next node, then
    prv = crr;
    //# (e) fourth, we make the crr to next node for the contineous loop
    crr = nxt;
  };
  //# (f) finally, after all the bakchodis we'll point out head to prv node as it is now the first node.
  head = prv;
};

void Recurrsive_Reverse_Traversing(Node * ptr) {

  if (ptr == nullptr) return;
  Recurrsive_Reverse_Traversing(ptr -> next);
  cout << ptr -> data << " ";
}

void Recurrsive_Reverse(Node * ptr) {
//   cout << ptr << "->" << ptr -> next << " ";
  if (ptr -> next == nullptr) {
    head = ptr;
    return;
  };
  Recurrsive_Reverse(ptr -> next);
  Node * nxt = ptr -> next;
  nxt -> next = ptr;
  ptr -> next = nullptr;
}

/**
 * The memory that is allocated to our program is tyically devided in four sections
 *# Heap - the free store is not fixed we can get space at run time.
 *# Stack - its use to store all the information to function cals and variables and this all are fixzed in siez which was decided at compile time.
 *# Static - this section use to store all the globals variables in programs that live for livetime of program
 *# Code - this section use to store all the instrcution that is needed to executed
 */