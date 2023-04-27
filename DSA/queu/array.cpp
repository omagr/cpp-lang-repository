
#include <bits/stdc++.h>
using namespace std;
#define MAX 5

class Queue {
    private:
        int f;
        int rear;
        int a[MAX];

    public:
        // constrcutor
	    Queue() { 
            f = 0;
            rear = 0;
        }
	    bool enqueue(int x);
	    int dequeue();
	    int front();
	    bool isEmpty();
        void display();
};

bool Queue::enqueue(int x)
{
	if (rear == MAX) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		a[f] = x;
        f++;
		cout << x << " pushed into stack\n";
		return true;
	}
}

int Queue::dequeue()
{
    if (front == rear) {
            printf("\nQueue is  empty\n");
            return;
        }
 
        // shift all the elements from index 2 till rear
        // to the left by one
        else {
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
 
            // decrement rear
            rear--;
        }
        
	if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}
int Stack::peek()
{
	if (top < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		int x = a[top];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}

// Driver program to test above functions
int main()
{
	class Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.pop() << " Popped from stack\n";
	
	//print top element of stack after poping
	cout << "Top element is : " << s.peek() << endl;
	
	//print all elements in stack :
	cout <<"Elements present in stack : ";
	while(!s.isEmpty())
	{
		// print top element in stack
		cout << s.peek() <<" ";
		// remove top element in stack
		s.pop();
	}

	return 0;
}
