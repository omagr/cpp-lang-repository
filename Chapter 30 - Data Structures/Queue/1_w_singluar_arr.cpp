#include <bits/stdc++.h>
#define MAX 99
using namespace std;

class Queue {
    int *arr, front, rear;
    public:
    Queue() { arr = new int[MAX]; front = -1; rear = -1;};
    bool isFull() { return rear == MAX-1;};
    bool isEmpty() { return (front == -1) && (rear == -1); };
    auto peek () { return front != -1 ? arr[front] : 0 ; };
    void traverse () {
        cout << "\nthe queue: ";
        if (front == -1) return;
        for (size_t i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
    }
    void enqueue(auto value) {
        /**
         ** condition A: check weather the array is full or not! 
         ** condition B: check weather the queue is empty or not!
         ** condition C: lastly if none above them sattisfie then simply increase the rear by one
        */
       if (isFull()) { cout << "\nQueue is overflow!"; return; };
       if (isEmpty()) front = rear = 0;
       else rear++;
       arr[rear] = value;
    };
    void dequeue() {
        /**
         ** condition A: check weather the queue is empty or not! 
         ** condition B: check weather the this is the first element of queue!
         ** condition C: lastly if none above them sattisfie then simply increase the front by one
        */
       if(isEmpty()) { cout << "\nQueue is underflow!"; return; };
       if(rear == front) front = rear = -1;
       else front++;
    };
};

int main(int argc, char const *argv[])
{
    Queue A;
    cout << "\n" << A.peek();
    cout << "\n" << A.isFull();
    cout << "\n" << A.isEmpty();
    A.dequeue();
    A.enqueue(2);
    A.enqueue(4);
    A.enqueue(6);
    A.enqueue(8);
    A.traverse();
    A.dequeue();
    A.traverse();
    cout << "\n" << A.peek();

    return 0;
}
