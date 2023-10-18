/**
 *? An array is called circular if we consider the first element as next of the last element. Circular arrays are used to implement queue.

 *# it is used to reuse the free space in front of array untill it reached the peek of queue.

 *! N -> no. of elements in array.
 ** current pos = i
 ** then, next pos = (i+1) % N
 *@ for i = -1 or i == N-1 then N % N
 ** then, prev pos = (i+N-1) % N
*/
#include <bits/stdc++.h>
#define MAX 99
using namespace std;

class Queue {
    int *arr, front, rear, n;
    public:
    Queue() { arr = new int[MAX]; front = -1; rear = -1; n = 0;};
    bool isFull() { return (rear + 1) % n == front; };
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
       else (rear++) % n;
       n++;
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
       else (front++) % n;
       n--;
    };
};
