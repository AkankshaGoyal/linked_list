#include <bits/stdc++.h>
using namespace std;


class Node{
	public:
		 int data;
		 Node*next;
};

Node * push(Node* prev,int new_data)
{
	Node *new_node = new Node();
	new_node ->data = new_data;
	prev->next = new_node; 
	return new_node;
}

void sortlist(Node*head)
{
	Node*curr = head;
	Node * index = NULL;
	if(curr == NULL)
	     return;
	while(curr!=NULL)
	{
		index = curr->next;
		while(index!=NULL)
		{
			if(curr->data > index->data)
			{
				int temp = curr->data;
				curr->data = index->data;
				index->data = temp;
			}
		    index = index->next;
		}
		curr = curr->next;
	}
}
int main()
{
	int n;
	cin >> n;
	int data;
	Node * dm = new Node();
    Node * prev = dm;	
	for(int i=1;i<=n;i++)
	{
		cin >> data;
		prev = push(prev,data);
	}
	Node * curr = dm->next;
	sortlist(curr);
	while(curr!=NULL)
	{
		cout<<curr->data;
		curr= curr->next;
	}
    return 0;
	
}
