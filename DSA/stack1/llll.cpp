#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *top = NULL;
Node *temporary_node = NULL;

bool isEmpty() {
    return (top == NULL);
};

void peek() {
    if (!isEmpty()) {
        cout << top->data;
    }
};

void push(int value) {
    temporary_node = new Node;
    temporary_node->data = value;
    temporary_node->next = top;
    top = temporary_node;
}

void pop() {
    // Check for stack underflow
    if (top == NULL) {
        cout << "Stack Underflow" << endl;
    } else {
        temporary_node = top;
        top = top->next;
        free(temporary_node);
    }
}

void display() {
        // Check for stack underflow
        if (top == NULL) {
            cout << "Stack Underflow";
        } else {
            temporary_node = top;
            while (temporary_node) {
                cout << temporary_node->data;
                temporary_node = temporary_node->next;
                if (temporary_node) {
                    cout << " -> ";
                }
            }
        }
}

int main()
{

    push(11);
    push(22);
    push(33);
    push(44);
 
    // Display stack elements
    display();
 
    // Print top element of stack
    peek();
 
    // Delete top elements of stack
    pop();
    pop();
 
    // Display stack elements
    display();
 
    // Print top element of stack
    peek();
 
    return 0;
}