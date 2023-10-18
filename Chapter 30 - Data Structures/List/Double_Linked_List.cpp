#include <bits/stdc++.h>
using namespace std;

//*Blue Print for creating a node
struct Node
{
    int data {};
    Node * next;
    Node * prev;
};  Node * head;

//*A function which give us a ptr to newly created node
Node* newNode(int value);
void Insert_at_End(int value);
void Insert_at_Beg(int value);
void Insert_at_nTh(int value, int pos);
void Delete_at_nTh(int pos);
void Traversing();
void Itreative_Reverse();

int main()
{
    head = nullptr;	// empty list at start,
    Insert_at_Beg(6);
    Insert_at_Beg(2);
   	// Traversing();	// the linked list: 6 4 2
    Insert_at_End(8);
    Insert_at_End(12);
    Insert_at_nTh(4, 2);
    Insert_at_nTh(10, 5);
    Insert_at_nTh(11, 6);
    Insert_at_End(9);
    Insert_at_Beg(1);
    Traversing();

    Delete_at_nTh(1);
    Delete_at_nTh(6);
    Delete_at_nTh(7);
    Traversing();
    Itreative_Reverse();

    return 0;
}

Node* newNode(int value)
{
    Node *myNode = new Node();
    myNode->data = value;
    myNode->prev = nullptr;
    myNode->next = nullptr;
    return myNode;
}

void Insert_at_Beg(int value)
{
    Node *temp = newNode(value);
   	//*checking if its a head node or not
    if (head == nullptr)
    {
        head = temp;
        return;
    };

    head->prev = temp;
    temp->next = head;
    head = temp;
};

void Insert_at_End(int value)
{
    Node *temp = newNode(value);
    if (head == nullptr)
    {
        head = temp;
        return;
    };

    Node *lastNode = head;
   	//*traversing through last node 
    while (lastNode->next != nullptr)
    {
       	// cout << "\nlastNode: " << lastNode->data;
        lastNode = lastNode->next;
       	// cout << "\nlastNode->next: " << lastNode;
    };

    lastNode->next = temp;
    temp->prev = lastNode;
}

void Traversing()
{
    cout << "\nthe linked list: ";
    Node *temp = head;
   	//*traversing through last node
   	//*here we dont required for the last hence we are doing this way
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };

};

void Insert_at_nTh(int value, int pos)
{
    Node *temp = newNode(value);
    if (pos == 1)
    {
        head->prev = temp;
        temp->next = head;
        head = temp;
    };

    Node *prevNode = head;
    for (int i = 1; i < pos - 1; i++)
    {
        prevNode = prevNode->next;
    };

    temp->next = prevNode->next;
    temp->prev = prevNode;
    prevNode->next->prev = temp;
    prevNode->next = temp;
};

void Delete_at_nTh(int pos)
{
    Node *prevNode = head;
    if (pos == 1)
    {
        head = head->next;
        head->prev = nullptr;
        delete prevNode;
        return;
    }

    for (int i = 1; i < pos - 1; i++)
    {
        prevNode = prevNode->next;
    };

    Node *crrNode = prevNode->next;
    if (crrNode->next != nullptr)
    {
        prevNode->next = crrNode->next;
        crrNode->next->prev = prevNode;
    }
    else
    {
        prevNode->next = nullptr;
    }

    delete crrNode;
};

void Itreative_Reverse()
{
    cout << "\nthe Itreative Reversed linked list: ";
    Node *temp = head;
   	//*traversing through last node 
    while (temp->next != nullptr)
    {
        temp = temp->next;
    };

   	//*traversing agin till 1st node 
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    };

}