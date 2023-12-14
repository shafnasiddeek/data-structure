#include<stdio.h>
int queue[25];
int rear=-1,front=-1;
int add_item;
int temp;
int visit[5]={0,0,0,0,0};
int graph[5][5]={{0,1,1,0,0},{1,0,0,1,1},{1,0,0,1,0},{0,1,1,0,1},{0,1,0,1,0}};
void enqueue(int add_item)
{
 	if(rear==25-1)
	{
		printf("\n queue is overflow.\n");
	}
	if(rear<25)
	{
		if(rear==-1 && front==-1)
		{ 
			front=rear=0;
			queue[rear]=add_item;
		}

		else
 		{
		rear=rear+1;
		queue[rear]=add_item;
		}
	}
}  
int dequeue()
{
   if(front==-1 )
   {
     printf("\n queue is underflow.\n");
   }
  else if(front==rear)
  {
    
    temp=queue[front];
    front=-1;
    rear=-1;
  }
  else
   {
     
     temp=queue[front];
     front=front+1;
   }
    return(temp);
    
}
int isVisited(int vtx)
{
	return(visit[vtx]);
}
void bfs(int s)
{
        int vtx;
	enqueue(s);
	while(front!=-1 && rear!=-1)
	{
		vtx=dequeue();
		if(!(isVisited(vtx)))
		{
			visit[vtx]=1;
			printf("%d\n",vtx);
			for(int i=0;i<5;i++)
			{
				if(graph[vtx][i]==1)
					enqueue(i);
			}
		} 
	}
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
		
void main()
{
	int i,j,k,v,type,e;
	printf("enter the no of vertice");
	scanf("%d",&v);
	getmatrix(v);
	printf("enter the type of graph(enter 1 for directed 2 for undirected");
	scanf("%d",&type);
	printf("enter the no of edges");
	scanf("%d",&e);
	
	printf("enter the 
}

