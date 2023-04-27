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
Node* oldNode;

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
    cout << endl;
    // craeting new node with 
    // *Q-> why we create pointer , can we use int or any other variable to hold it 
    
    
    Node* newnode = new Node();
    // assing data to it 
    newnode->data = newData;
    cout << "newnode->data: " << newnode->data << endl;
    // assing next to it 
    newnode->next = NULL;
    cout << "newnode->next: " << newnode->next << endl;
    // printig some info 
    cout << "printing add of new node:: " << newnode << endl;
    cout << "printing size of new node:: " << sizeof(newnode) << endl;

    if (head == NULL) {
        // assing head to it 
        cout << "bfr haed: " << head << endl;
        head = newnode;
        cout << "after head: " << head << endl;
        // assing oldnode to it as refrence 
        oldNode = newnode;
       
    }
    else {
        cout << "---------" << endl;
    cout << "oldNode->data: " << oldNode->data << endl;
    cout << "oldNode->next: " << oldNode->next << endl;
    cout << "---------" << endl;
        // assigning the oldnode/currentNode to newly node addr
        oldNode->next = newnode;
        cout << " oldNode->nextt: " <<  oldNode->next << endl;
        // most imp: it will hold the preseence of crr node
        oldNode = newnode;
        cout << " oldNode: " << oldNode << endl;
        delete newnode;
    }
    cout << endl;
    
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
        cout << "node: " << node << endl;
        cout << node->data; 
        node = node->next; 
        cout << endl << "node: " << node << endl;
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
    cout << "head " << head << endl;
    traversal(head);
    return 0;
}