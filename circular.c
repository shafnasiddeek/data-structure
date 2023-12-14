#include<stdio.h>
#define size 5
void enqueue(int [],int);
void dequeue(int []);
void display(int []);
int front=-1;
int rear=-1;
int main()
{
	int n,choice;
	int queue[size];
	do
	{
		printf("\ncircular queue\n1.enqueue\n2.dequeue\n3.display\n4.exit");
		printf("\nenter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nente the number:");
				scanf("%d",&n);
				enqueue(queue,n);
				break;
			case 2:dequeue(queue);
				break;
			case 3:display();
				break;
			case 4:printf("exited");
				break;
		}
	}
	while(choice!=4)
}
void enqueue(int queue,int item)
{
	if(front==0&&rear==size-1)||(front==rear+1)
	{
		printf("queue is full");
		return;
	}
	else if(rear==-1)
	{
		rear++;
		front++;
	}
	else if(rear==size-1&&front>0)
	{
		rear=0;
	}
	else
	{
		rear++;
	}
	queue[rear]=item;
}
void display(int queue)
{
	int i;
	printf("\n");
	if(front>rear)
	{
		for(i=front;i<size;i++)
		{	
			printf("%d",queue[i]);
		}
		for(i=0;i<rear;i++)
		printf("queue is empty",queue[i]);
	}
	else
	{
		for(i=front;i<=rear;i++)
		printf("%d",queue[i]);
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("queue is empty");
	}
	else if(front==rear)
	{
		printf("\n%d deleted",queue[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("\n%d deleted",queue[front]);
		front++;
	}
}

