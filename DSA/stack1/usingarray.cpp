// #include<stdio.h>
// #include<conio.h>

// #define SIZE 10

// void push(int);
// void pop();
// void display();

// int stack[SIZE], top = -1;

// void main()
// {
//    int value, choice;
//    clrscr();
//    while(1){
//       printf("\n\n***** MENU *****\n");
//       printf("1. Push\n2. Pop\n3. Display\n4. Exit");
//       printf("\nEnter your choice: ");
//       scanf("%d",&choice);
//       switch(choice){
// 	 case 1: printf("Enter the value to be insert: ");
// 		 scanf("%d",&value);
// 		 push(value);
// 		 break;
// 	 case 2: pop();
// 		 break;
// 	 case 3: display();
// 		 break;
// 	 case 4: exit(0);
// 	 default: printf("\nWrong selection!!! Try again!!!");
//       }
//    }
// }
// void push(int value){
//    if(top == SIZE-1)
//       printf("\nStack is Full!!! Insertion is not possible!!!");
//    else{
//       top++;
//       stack[top] = value;
//       printf("\nInsertion success!!!");
//    }
// }
// void pop(){
//    if(top == -1)
//       printf("\nStack is Empty!!! Deletion is not possible!!!");
//    else{
//       printf("\nDeleted : %d", stack[top]);
//       top--;
//    }
// }
// void display(){
//    if(top == -1)
//       printf("\nStack is Empty!!!");
//    else{
//       int i;
//       printf("\nStack elements are:\n");
//       for(i=top; i>=0; i--)
// 	 printf("%d\n",stack[i]);
//    }
// }




/* C++ program to implement basic stack
operations */
#include <bits/stdc++.h>

using namespace std;

#define MAX 5

class Stack {
    private:
        int top;
        int a[MAX];

    public:
        // constrcutor
	    Stack() { 
            top = -1;
        }
	    bool push(int x);
	    int pop();
	    int peek();
	    bool isEmpty();
};

bool Stack::push(int x)
{
	if (top >= (MAX - 1)) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}

int Stack::pop()
{
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
