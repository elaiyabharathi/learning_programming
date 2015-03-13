#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
class stack 
{
	public:
	void push(node **head,int x)
	{
		node *temp;
	  	if((*head)==NULL)
		{
			temp = new node;
			temp->data = x;
			temp->next==NULL;
			*head=temp;
		}
		else
		{
			temp = new node;
			temp->data = x;
			temp->next = (*head);
			(*head) = temp;
		}
	}
	void pop(node **head)
	{
		node *temp;
		if((*head)==NULL)
			return;
		else 
		{
			temp = *head;
			(*head) = (*head)->next;
			cout<<temp->data<<endl;
		}
	}
	void peep(node **head)
	{
		node *temp;
		if((*head)==NULL)
			return;
		else
		{
			cout<<(*head)->data<<endl;
		}
	}
};
int main()
{
	stack st;
	node *head;
	st.push(&head,1);
	st.push(&head,2);
	st.pop(&head);
	st.peep(&head);
}			 
