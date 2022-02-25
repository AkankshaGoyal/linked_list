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
	while(curr!=NULL)
	{
		cout<<curr->data;
		curr= curr->next;
	}
    return 0;
	
}
