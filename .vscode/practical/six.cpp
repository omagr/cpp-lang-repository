#include <bits/stdc++.h>
using namespace std;

struct QNode
{
    int data;
    QNode *next;
    QNode(int d)
    {
        data = d;
        next = NULL;
    }
};

struct Queue
{
    QNode *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }

    void enQueue(int x)
    {

        // Create a new LL node
        QNode *temp = new QNode(x);

        // If queue is empty, then
        // new node is front and rear both
        if (rear == NULL)
        {
            front = rear = temp;
            return;
        }

        // Add the new node at
        // the end of queue and change rear
        rear->next = temp;
        rear = temp;
    }
};

// Driven Program
int main()
{

    Queue q;
    for (int i = 15; i <= 35; i += 5)
    {
        q.enQueue(i);
    }
    cout << "Queue Front : " << (q.front)->data << endl;
}