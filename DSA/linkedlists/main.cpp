#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

Node*new_node = NULL;
Node*old_node = NULL;
Node*head_node = NULL;

void insertAfter (Node*node, int value) {
    new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;
    if (node->next == NULL) {
        node->next = new_node;
        cout << "insertAfter! at last, after" << (node->data) << endl;
    } else {
        new_node->next = node->next;
        node->next = new_node;
        cout << "insertAfter! after " << (node->data) << endl;
    }
};

void deletion () {
    if (head_node == NULL) {
        cout << "underflow";
    } else {
        old_node=head_node;
        head_node=head_node->next;
        free(old_node);
    }
};

void insertAtlast (int value) {
    new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;
    if (head_node == NULL) {
        head_node = new_node;
        old_node = new_node;
        cout << "inserted! at head" << endl;
    } else {
        old_node->next = new_node;
        old_node = new_node;
        cout << "inserted! at last" << endl;
    }
};

void insertAtfirst (Node*node, int value) {
    new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;
    if (head_node == NULL) {
        head_node = new_node;
        cout << "inserted! at head" << endl;
    } else {
        new_node->next = node;
        head_node = new_node;
        cout << "inserted! at first" << endl;
    }
};

void traversal (Node*head) {
    if (head == NULL) {
        cout << "underflow!" << endl;
    } else {
        while (head) {
            cout << head->data << " -> ";
            head = head->next;
        }
        cout << endl;
    }
};

int main()
{
    insertAtlast(10); // 10
    insertAtlast(30);
    insertAtlast(50);
    insertAtlast(60);
    insertAtlast(60); // 10 30 50 60 60
    insertAtfirst(head_node,0); // 0 10 30 50 60 60
    insertAfter(head_node,70); // 0 70 10 30 50 60 60
    insertAtfirst(head_node,1);
    insertAfter(head_node,89); // 1 89 0 70 10 30 50 60 60
    insertAtfirst(head_node,2);
    insertAfter(head_node,45); // 2 45 1 89 0 70 10 30 50 60 60
    insertAtfirst(head_node,3);
    insertAfter(head_node,65); // 3 65 2 45 1 89 0 70 10 30 50 60 60
    insertAtfirst(head_node,4);
    insertAfter(head_node,62); // 4 62 3 65 2 45 1 89 0 70 10 30 50 60 60
    insertAtfirst(head_node,5); // 5 4 62 3 65 2 45 1 89 0 70 10 30 50 60 60
    traversal(head_node);
    deletion();
    return 0;
}
