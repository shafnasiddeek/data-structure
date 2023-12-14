#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*TOP=NULL;
void push(int item)
{
	struct node*new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=item;
	if(TOP==NULL)
	{
		TOP=new;
		new->link=NULL;
	}
	else
	{
		new->link=TOP;
		TOP=new;
	}
}
void pop()
{
	if(TOP==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		struct node*temp=TOP;
		TOP=TOP->link;
		free(temp);
	}
}
void display()
{
	if(TOP=NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		struct node*temp=TOP;
		printf("\nentered items are");
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->link;
		}
		printf("\n");
	}
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	pop();
	display();
}
