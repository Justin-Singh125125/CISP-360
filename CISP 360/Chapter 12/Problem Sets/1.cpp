#include <iostream>
#include <std>
using namespace std;

struct ListNode
{
	int data;
	struct ListNode *next;
};
	
//a global pointer variable

ListNode *head;

int main()
{

	head = new ListNode[(sizeof(struct ListNode))];
	
	
	
	return 0;
}


