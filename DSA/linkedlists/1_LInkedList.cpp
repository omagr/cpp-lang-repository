#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *ptrToNext;
};
Node *head, *newNode, *oldNode;

void traversal(Node *pointer)
{
    while (pointer)
    {
        cout << pointer->value << endl;
        pointer = pointer->ptrToNext;
    }
}
void insertion()
{
    newNode = new Node();
    newNode->value = 1;
    newNode->ptrToNext = NULL;
    if (head == NULL)
    {
        head = newNode;
        // most imp: it will hold the preseence of crr node
        oldNode = newNode;
    }
    else
    {
        // assigning the oldnode/currentNode to newly node addr
        oldNode->ptrToNext = newNode;
        // most imp: it will hold the preseence of crr node
        oldNode = newNode;
    }
}
void deletion() {
if (head == NULL) {
    cout << 'failed';
} else {
    oldNode=head;
    head=head->ptrToNext;
    free(oldNode);
}
}
void search() {

}

int main()
{

    return 0;
}
