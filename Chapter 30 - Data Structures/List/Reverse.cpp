struct Node {
   int data {};
   Node * next;
}; Node * head; //# (b) now we have the global head ptr,


/**
 *@ time-complexcity: O(n)
 *@ space-complexcity: O(1)
*/
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

/**
 *@ time-complexcity: O(n)
 *@ space-complexcity: O(n)
 ** implicit Stack: because computer uses stack implecity to execute functions call, so yeah it will create a stcak of n no. of nodes.
*/
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

void Reverse_w_explicit_stack () {
    
}