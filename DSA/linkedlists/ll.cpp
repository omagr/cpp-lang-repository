// Linkedlist implementation using Classes in C++
#include <iostream>
using namespace std;

// blueprint for node
class Node {
    public:
        int data;
        Node* next;
};
Node* head = NULL;
Node* oldNode = NULL;

// int main() {
//     cout << "size of Node: " << sizeof(Node) << endl;
//     cout << "size of LinkedList: " << sizeof(LinkedList) << endl;
//     Node* newnode = new Node();
//     cout << "size of newnode: " << sizeof(newnode) << endl;
//     cout << "newnode: " << newnode << endl;
//     cout << "newnode: " << &Node << endl;


//     return 0;
// }

// function to add node to a list
void insertion(int newData) {
    // craeting new node with 
    // *Q-> why we create pointer , can we use int or any other variable to hold it 
    Node* newnode = new Node();
    // assing data to it 
    newnode->data = newData;
    // assing next to it 
    newnode->next = NULL;
    // printig some info 
    cout << "printing add of new node:: " << newnode << endl;
    cout << "printing size of new node:: " << sizeof(newnode) << endl;

    if (head == NULL) {
        // assing head to it 
        head = newnode;
        // assing oldnode to it as refrence 
        oldNode = newnode;
        delete newnode;
    }
    else {
        // assigning the oldnode/currentNode to newly node addr
        oldNode->next = newnode;
        // most imp: it will hold the preseence of crr node
        oldNode = newnode;
        delete newnode;
    }
}

// // reverse Linked List
// void LinkedList::reverseList() {
//     Node* temp = head;
//     Node* nextnode = NULL;
//     Node* revnode = NULL;
//     while (temp != NULL) {
//         head = temp;
//         nextnode = temp->next;
//         temp->next = revnode;
//         revnode = temp;
//         temp = nextnode;
//     }
// }

void traversal(Node *node) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
    }
    else {
        while (node != NULL) 
    { 
        cout<<" "<<node->data; 
        node = node->next; 
    } 
    }
}

int main() {


    insertion(100);
    insertion(200);
    insertion(300);
    insertion(400); 
    insertion(500);
    cout << "Linked List data" << endl;
    traversal(head);
    return 0;
}