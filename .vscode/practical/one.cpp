#include<iostream>
using namespace std;

class node{
	public:
		int a;
		node *next;
		node(){
			next = NULL;
		}
};

class LinkedList {
	node *head;
	public:
		LinkedList(){
			head = NULL;
		}
		
		void insertNode(int a){
			node *temp = new node();
			temp -> a = a;
            // if linked list is empty
			if (head == NULL){
				head = temp; // make temp the new head
			}
			// if linked list is not empty
			else{
				// go to the last node of the linked list
				node *ptr = head;
				// the loop sets ptr to last node of the linked list
				while (ptr->next != NULL){
					ptr = ptr->next;
				}
				// ptr now points to the last node of the linked list
				// store temp in the next of ptr  
				ptr->next = temp;
			}
		}

		void traversList(){
			if (head == NULL){
				cout<< "List is empty" <<endl;
			}
			else{
				node *temp = head;
				cout<<"Linked List: ";
				while (temp != NULL){
					cout<< temp-> a <<"    ";
					temp = temp -> next;
				}
				cout << endl;
			}
		}		
};

int main() {
    // make a new list
	LinkedList list;

    // add item 
    list.insertNode(10);
    list.insertNode(20);
    list.insertNode(30);
    list.insertNode(40);
    list.insertNode(50);
    list.insertNode(160);

    // trvers lsit 
    list.traversList();
    return 0;
}