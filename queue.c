#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,max;
int queue[100];
void enqueue()
{
	int item;
	printf("\nenter the elements");	
	scanf("%d",&item);
	if(rear==max-1)
	{
		printf("\noverflow");
		return;
	}
	if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=rear+1;
	}
	queue[rear]=item;
	printf("\nvalue is inserted");
}
void dequeue()
{
	int item;
	if(front==-1||front>rear)
	{
		printf("\nunderflow");
		return;
	}
	else
	{
		item=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
		printf("\nelement deleted");
	}
}
void display()
{
	int i;
	if(rear==-1)
	{
		printf("\nempty queue");
	}
	else
	{
		printf("\nelements in queue are");
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",queue[i]);
		}
	}
}
int main()
{
	int choice;
	printf("\nenter the size of queue");
	scanf("%d",&max);
	printf("\nqueue operations using array");
	printf("\n 1.enqueue\n2.dequeue\n3.display\n4.exit");
	while(choice!=4)
	{
		printf("\nenter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\nexited");
				break;
			default:printf("\nenter valid choice");
		}
	}
return 0;
}
