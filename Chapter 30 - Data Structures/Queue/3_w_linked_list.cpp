#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node {
    public:
    T value; Node* next;
    Node(T data) : value(data), next(nullptr) {};
};

template <typename T>
class Queue {
    Node<T>* front; Node<T>* rear;
    public:
    Queue(): front(nullptr), rear(nullptr) {};
    bool is_Empty() { return (front == nullptr && rear == nullptr); };
    T peek() { 
        if (is_Empty()) throw runtime_error("Queue is empty");
        else return front->value;
    };
    void enqueue(T data) {
        Node<T>* temp = new Node<T>(data);
        if (is_Empty()) front = rear = temp;
        else { rear->next = temp; rear = temp; }
    }
    void dequeue() {
        if (is_Empty()) {cout << "\nQueue is underflow!"; return; }
        if (front == rear) {
            delete front;
            front = rear = nullptr;
        } else {
            Node<T>* temp = front;
            front = front->next;
            delete temp;
        }
    }
    void traverse() {
        cout << "\nthe Queue: ";
        Node<T>* temp = front;
        while (temp) 
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }
};

int main(int argc, char const *argv[])
{
    Queue<int> intQueue;
    intQueue.dequeue();
    intQueue.enqueue(42);
    intQueue.enqueue(10);
    intQueue.enqueue(12);
    intQueue.enqueue(13);
    intQueue.traverse(); // Output: the Queue: 42 10
    cout << "peek" << intQueue.peek();
    intQueue.dequeue();
    cout << "peek" << intQueue.peek();
    intQueue.dequeue();
    intQueue.traverse(); 


    Queue<char> charQueue;
    charQueue.dequeue();
    // cout << "peek" << charQueue.peek();
    charQueue.enqueue('A');
    charQueue.enqueue('B');
    charQueue.enqueue('C');
    charQueue.enqueue('D');
    charQueue.traverse(); // Output: the Queue: A B
    cout << "peek" << charQueue.peek();
    charQueue.dequeue();
    cout << "peek" << charQueue.peek();
    charQueue.traverse();

    return 0;
}
