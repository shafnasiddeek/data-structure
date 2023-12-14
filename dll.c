#include<stdio.h>
#include<stdlib.h>
struct node
{
	structnode*rearlink;
	int data;
	structnode*frontlink;
};
structnode*header=NULL,*last=NULL;
void insfrnt(int item)
{
	structnode*new;
	new=(structnode*)malloc(sizeof(structnode));
	new->data=item;
	new->rearlink=NULL;
	if(header==NULL)
	{
		header=last=NULL;
		new->frontlink=NULL;
		printf("\nelement succesfully inserted at powsition 1\n");
	}
	else
	{
		header->rearlink=new;
		new->frontlink=header;
		header=new;
		printf("\nelement inserted at position 1");
	}
}
void insfrnt(int item)
{
	structnode*new;
	new=(structnode*)malloc(sizeof(structnode));
	new->data=item;
	new->frontlink=NULL;
	int count=0;
	if(header==NULL)
	{
		header=last=new;
		header=new;
		new->rearlink=NULL;
		printf("\nelement succesfully inserted");
	}
	else
	{
		last->frontlink=new;
		new->rearlink=last;
		last=new;
		printf("\n element succesfully inserted at position%d",count+2);
	}
}
void inspos(int item,int key)
{
	structnode*new;
	new=(structnode*)malloc(sizeof(structnode));
	new->data=item;
	structnode*temp=header;
	int count=0;
	while((temp->data!=key)&&(temp->frontlink!=NULL))
	{
		temp=temp->frontlink;
		count++;
	}
	if((temp->frontlink==NULL)&&(temp->data==key))
	{
		new->frontlink=NULL;
		new->rearlink=temp;
		temp->frontlink=new;
		last=new;
		printf("element inserted at position%\n",count+2);
	}
	elseif((temp->frontlink==NULL)&&(temp->data!=key))
	{
		printf("\n key not found");
	}
}
void delfrnt()
{
	if(header==NULL)
	{
		printf("\n list is empty");
	}
	else if(header->frontlink==NULL)
	{
		("\nelement deleted succesfully:%d\n",header->data);
		free(header);
		header=last=NULL;
	}
	else
	{
		structnode*temp=header;
		printf("element deleted succesfully:%d",temp->data);
		header=temp->frontlink;
		header->rearlink=NULL;
		free(temp);
	}
}
void delend()
{
	if(header==NULL)
	{
		printf( "\n list is empty");

	}
	else if(header->frontlink==NULL)
	{
		printf("element deleted succesfully");
		header->data;
		free(header);
		header=last=NULL;
	}
	else
	{
		structnode*temp=last;
		printf("element deleted succesfully:%d",last->data);
		last=last->rearlink;
		last->frontlink=NULL;
		free(temp);
	}
}
