#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data {};
    Node* next;
};  Node* top;

Node* newNode (int value) {
    Node* myNode = new Node();
    myNode->data = value;
    myNode->next = nullptr;
    return myNode;
};

void push(int value) {
    Node* temp = newNode(value);
    temp->next = top;
    top = temp;
}

void pop() {
    if (!top) {cout << "\nError: Stcak is underflow!"; return;}
    Node* temp = top;
    top = top->next;
    delete temp;
}

int peek() {
    if (top) return top->data;
    return -1;
}

void traverse() {
    Node* temp = top;
    cout << "\nThe Stack: ";
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    cout << "\n";
    top = nullptr;
    pop();
    cout << "\ntop: " << peek();
    push(2);
    push(4);
    push(6);
    push(8);
    traverse();
    pop();
    cout << "\ntop: " << peek();
    pop();
    traverse();

    return 0;
}


