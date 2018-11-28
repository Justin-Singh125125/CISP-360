#include <iostream>
using namespace std;

//create a node structure
struct nodeStructure
{
	int data;
	nodeStructure *next;
	
};

void displayLinkedList(struct nodeStructure *head)
{
	struct nodeStructure *p = head;
	while (p != NULL)
	{
		cout << p->data << endl;
		p = p->next;
	}
	
}

int main()
{
	//dynamically allocate nodes
	nodeStructure *head = new nodeStructure;
	nodeStructure *third = new nodeStructure;
	nodeStructure *second = new nodeStructure;
	
	//make the head point at the first node
	head->data = 1;
	//connect head to the next node
	head ->next = second;

	second ->data = 2;
	second ->next = third;

	third-> data = 3;
	
	
	//add over a new one node to the front of the list
	nodeStructure *newNode = new nodeStructure;
	newNode -> data = 101;
	third -> next = newNode;
	newNode -> next = NULL;
	


	
	//now we have to move this to the front of the linked list
	

	//send over the head
displayLinkedList(head);
	return 0;
}
