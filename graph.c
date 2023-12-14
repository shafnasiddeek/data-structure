#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,max;
int queue[100];
int graph[5][5]={{0,1,1,0,0,},{1,0,0,1,1},{1,0,0,1,0},{1,0,1,0,1},{0,1,0,1,0}}
void enqueue()
{
}
int dequeue()
{
	int item;
	if(front==-1)
	{
		printf("\nqueue empty");
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
		
		return(item);
	}
}
void displaygraph()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d",graph[i][j]);
		}
		printf("\n");
	}
}

void bfs(int S)
{
	enqueue(S);
	while(
	
}
void getmatrix(int v)
{
	int i,j;
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
}
int main()
{
	printf("enter the no of vertice");
	scanf("%d",&v)
	getmatrix(v);
	printf(bfs traversal is");
	bfs(0);
}


	
