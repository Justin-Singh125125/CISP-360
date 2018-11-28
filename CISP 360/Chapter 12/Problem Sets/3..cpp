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
	third -> next = NULL;
	
	//send over the head
	displayLinkedList(head);
	
	return 0;
}
