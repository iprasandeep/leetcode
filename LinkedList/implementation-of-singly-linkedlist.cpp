#include<iostream>
using namespace std;

// A linked List node

class Node
{
	public:
		int data; //  initializing data field
		Node* next; // pointer to next node
		
};
Node* newNode(int data)
{
	// allocating a new node in a heap and set its data
	Node* node = new Node;
	node->data = data;
	// next pointer of the new node points to nothing
	node->next = NULL;
	return node;
}
// function for linkedlist implementation
Node* constructList()
{
	// construct three linked list nodes
	Node* first = newNode(1);
	Node* second = newNode(2);
	Node* third = newNode(3);
	
	// rarrange the pointers to construct a list
	Node* head = first;
	first->next = second;
	second->next = third;
	
	// return a pointer to the first node in the list
	return head;
}
void printList(Node* head)
{
int c = 0;
	Node* ptr = head;
	for(ptr = head; ptr!=NULL; ptr->next)
	{
		c++;
		cout<<ptr->data<<" ->";
		ptr = ptr->next;
	}
	cout<<"NULL"<<"\n";
	cout<<"Size of Linked List: "<<c<<"\n";
}


int main()
{
	Node *head = constructList();
	printList(head); //  printing linked list
	return 0;
}
