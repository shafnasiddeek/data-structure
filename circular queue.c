#include<stdio.h>
#include<stdlib.h>
int queue[1000];
int front=-1;
int rear=-1;
int max;
void enqueue(int item)
{
	if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=item;
	}
	else if(rear+1)%max==front)
	{
		printf("queue is overflow");
	}
	else
	{
		rear=(rear+1)%max;
		queue[rear]=item;
	}
}
int dequeue()
{
	if(front==-1)&&(rear==-1))
	{
		printf("queue is underflow");
	}
	else if(front==rear)
	{
		printf("dequeued element is%d",queue[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("dequeued element is%d",queue[front]);
		front=(front+1)%max;
	}
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
	{
		printf("\n queue is empty");
	}
	else
	{
		printf("elements in queue are");
		for(i=front;i!=rear;i=(i+1)%max)
		
		{
			printf("%d",queue[i]);
			
		}
		printf("%d",queue[rear];
	}
}
int main()
{
	int choice=1,n;
	printf("\n enter the size of queue");
	scanf("%d",&max);
	while(choice<1&&choice!=0)
	{
		printf("\n1.insert an element");
		printf("\n2.deletet an element");
		printf("\n3.display the element");
		printf("\n4.exit");
		printf("\nenter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nenter number");
			scanf("%d",&n);
			enqueue(n);
			printf("element inserted");
			break;
			case 2:dequeue();
				break;
			case 3:display();
				break;
			case 4:exit(0);
				break;
			default:
				printf("enter a valid choice");
		}
	}
}



 
