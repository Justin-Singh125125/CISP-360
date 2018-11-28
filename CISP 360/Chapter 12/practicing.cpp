#include <cstdlib>
#include <iostream>


using namespace std;

//this is the characteristics of each node structure
//one piece of data
//pointer that points to next
struct node
{
	int data;
	struct node* next;
};

struct node* BuildOneTwoThree()
{
	struct node * head = new node[sizeof(struct node)];
	struct node * second = new node[sizeof(struct node)];
	struct node * third = new node[sizeof(struct node)];
	
	head -> data= 1;
	
	//connects the head to the second 
	head -> next = second;
	
	second -> data = 2;
	second-> next = third;
	
	
	third -> data = 3;
	third -> next = NULL;
	
	//return all of the modifications
	return head;
	
	
	
};
int Length(struct node * head)
{
	struct node * current = head;
	int count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return count;
};
struct LinkTest()
{
 	struct node* head = BuildTwoThree(); // suppose this builds the {2, 3} list struct node* newNode;
	newNode= malloc(sizeof(struct node)); // allocate newNode->data = 1;
	newNode->next = head; // link next
	head = newNode; // link head
	// now head points to the list {1, 2, 3}
};



