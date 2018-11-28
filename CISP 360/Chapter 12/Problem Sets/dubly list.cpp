#include <iostream>
using namespace std;

struct ListNode 
{
	struct ListNode *prev;
	int data;
	struct ListNode *next;
};
int main()
{
	ListNode *first = new ListNode;
	ListNode *second = new ListNode;
	ListNode *third = new ListNode;
	
	first ->prev = NULL;
	first->data =12;
	first->next = second;
	
	//points back at the first
	second->prev = first;
	second ->data = 99;
	second ->next = third;
	third ->prev = second;
	third ->data = 37;
	third->next = NULL;
	
	
	return 0;
}
