#include <bits/stdc++.h>
#define MAX 99
using namespace std;

struct Node {
  int data {};
  Node * next;
};

class Stack {
    int * arr;
    int top;
    public:
        Stack() {
            arr = new int[MAX];
            top = -1;
        };
    void Push(int value) {
        if (top == MAX - 1) {
            cout << "\nError: Stack is overflow!";
            return;
        };
        top++;
        arr[top] = value;
    };
    void Pop() {
        if (top == -1) {
            cout << "\nError: Stack is underflow!";
            return;
        };
        top--;
    };
    int Top() {
        if (top == -1) {
            cout << "\nError: Stack is underflow!";
            return -1;
        };
        return arr[top];
    };
    bool Is_empty() {
        if (top == -1) return true;
        return false;
    };
    void Traverse() {
        for (size_t i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
    }
};

class List {
    private:
    Node* temp {nullptr};
    Node* head {nullptr};
    public:
    List(int value) { 
        temp = new Node();
        temp -> data = value;
        temp -> next = nullptr;
        head = temp;
    };
    void Insert_At_Last(int value) {
        if (head == nullptr) { head = temp;  return; };
        Node* last = head;
        while (last -> next != nullptr) {
            last = last -> next;
        };
        last -> next = temp;
    };
    void Insert_At_Beginning(int value) { 
        if (head != nullptr) temp -> next = head;
        head = temp;
    };
    void Insert_At_Nth(int value, int pos) {  
        if (pos == 1) {
            temp -> next = head;
            head = temp;
            return;
        }
        Node * prevNode = head;
        for (size_t i = 1; i < pos - 1; i++) {
            prevNode = prevNode -> next;
        };
        temp -> next = prevNode -> next; 
        prevNode -> next = temp;
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
        Node * temp = prevNode -> next;
        prevNode -> next = temp -> next;
        delete temp;
    }
    void Traversing() {
        cout << "\nthe linked list: ";
        Node * temp = head;
        while (temp != nullptr) {
            cout << temp -> data << " ";
            temp = temp -> next;
        };
    };
};

int main() {
    List l(1);
    // l.Insert_At_Last(2);
    // l.Insert_At_Last(3);
    // l.Insert_At_Last(5);
    l.Insert_At_Beginning(0);

    l.Traversing();
}