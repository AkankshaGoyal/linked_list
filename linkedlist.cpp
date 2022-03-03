#include <bits/stdc++.h>
using namespace std;


class Node
{
     public:
     	int data;
     	Node *next;
};


int  printlist(Node *head)
{
	Node *curr = head;
	int count = 0;
	while(curr!=NULL)
	{
		int temp = curr->data;
		cout<<temp;
		curr = curr->next;
		count= count+1;

	}
	return count;
}

int main()
{
	Node*head = NULL;
	Node*second = NULL;
	Node*third = NULL;
	head = new Node();
	second = new Node();
	third = new Node();
	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 1;
	third->next = NULL;
	int num = printlist(head);
	cout<<num;
    return 0;
}