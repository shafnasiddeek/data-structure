#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *header=NULL;
void insert_at_front(int item)
{
	//for the first node
	struct node *newnode;
	newnode = (struct node*) malloc(sizeof(struct node));
	if(header==NULL)
	{
		newnode->data=item;
		newnode->link=NULL;
	}
	
	
		
	
	//for the subsequent node
	else
	{

		newnode->data=item;
		newnode->link=header;
	}
	header=newnode;
	
}
void insert_at_any(int item,int key)
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	struct node *temp;
	temp=header;
		while(temp->data!=key&&temp->link!=NULL)
		{
			temp=temp->link;
		}
	if(temp->link==NULL)
		{
			printf("key not found");
		}
	else
	{
		newnode->link=temp->link;
		temp->link=newnode;
	}
}
void insert_at_end(int item)
{
	struct node *newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	struct node *ptr;
	ptr=header;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	ptr->link=newnode;
	newnode->link=NULL;
	newnode->data=item;

	
	
}
void traverse()
{
	struct node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr->link;
	}


}
void delete_at_front()
{
	if(header==NULL)
	{
		printf("list is empty");
	}
	else
	{
		struct node *temp=header;
		header=temp->link;
		free(temp);
	}
	
}
void delete_at_end()
{
	if(header==NULL)
	{
		printf("list is empty");
	}
	else if(header->link==NULL)
	{
		header==NULL;
	}
	else
	{
		struct node *temp1=header;
		struct node *temp2=header;
		while(temp1->link!=NULL)
		{
			temp2=temp1;
			temp1=temp1->link;
		}
		temp2->link=NULL;
		free(temp1);
	}
}
void delete_at_any(int key)
{
	if(header==NULL)
	{
		printf("list is empty");
	}
	else
	{
		struct node *temp1=header;
		struct node *temp2=header;
		while((temp1!=NULL)&&(temp1->data!=key))
		{
			temp2=temp1;
			temp1=temp1->link;
		}
		if(temp1==NULL)
		{
			printf("key not found");
		}
		else
		{
			if(temp->link==NULL)
			{
				free(temp2);
				header=NULL;
			}
			else
			{
				if(temp1==header)
				{
					header=temp1->link;
				}
				else
				{
					temp2->link=temp->link;
				}
				free(temp1);
			}
		}
	}
}
void display()
{
	if(header==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		struct node*temp=header;
		printf("\n entered items are");
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->link;
		}
		printf("\n");
	}
}
void search(int key)
{
	int count=0;
	if(header==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		struct node*temp1=header;
		while((temp1->data!=key)&&(temp1->link!NULL))
	{
		temp1=temp1->link;
		count++;
	}
	if((temp1->link=NULL)&&(temp1->data!=key))
	{
		printf("key not found");
	}
	else
	{
		printf("\nkey found at position %d",count+1);
	}
	}
}

		
	
int main()
{
	int z,k,c;
	printf("\n linked list operations");
	while(1)
	{
		printf("\n 1.insert at front\n2.insert at end\n3.insert after position\n4.delete at front\n5.delete at end\n6.delete at any    				positio\n7.display elements\n8.search position of elements\n9.exit");
		printf("\nselect the operations");
		scanf("%d",&c);
		switch(c)
		{
			case 1:printf("enter the data to insert at front");
				scanf(%d",&z);
				insert_at_front(z);
				break;
			case 2:printf("enter the data to insert at end");
				scanf("%d",&z);
				insert_at_end(z);
				break;
			case 3:display();
				printf("\n select the position");
				scanf("%d",&k);
				printf("enter the data to insert after the position");
				scanf("%d",&z);
				insert_at_any(z,k);
				break;
			case 4:delete_at_front();
				break;
			case 5:delete_at_end();
				break;
			case 6:display();
				printf("\n select position");
				scanf("%d",&k);
				delete_at_any(k);
				break;
			case 7:display();
				break;
			case 8:printf("enter the key");
				scanf("%d",&k);
				search(k);
				break;
			case 9:printf(\n bye bye");
				exit(0);
				break;
			default:printf("\n wrong input");
		}
}
return 0;
}




}	
