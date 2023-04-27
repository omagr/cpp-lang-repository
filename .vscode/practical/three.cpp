// C++ program to implement a queue using an array
#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int front, rear, capacity;
    int *queue;
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new int;
    }

    // function to insert an element
    // at the rear of the queue
    void queueEnqueue(int data)
    {
        // check queue is full or not
        if (capacity == rear)
        {
            cout << "queue is full" << endl;
            return;
        }

        // insert element at the rear
        else
        {
            queue[rear] = data;
            rear++;
        }
        return;
    }

    // print queue elements
    void queueDisplay()
    {
        int i;
        if (front == rear)
        {
            cout << "queue is empty" << endl;
            return;
        }

        // traverse front to rear and print elements
        for (i = front; i < rear; i++)
        {

            cout << queue[i] << "   ";
        }
        return;
    }
};

// Driver code
int main(void)
{
    // Create a queue of capacity 4
    Queue q(6);

    // print Queue elements
    q.queueDisplay();

    // inserting elements in the queue

    for (int i = 15; i <= 20; ++i)
    {
        q.queueEnqueue(i);
    }

    // print Queue elements
    q.queueDisplay();

    return 0;
}