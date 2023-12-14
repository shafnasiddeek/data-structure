#include<stdio.h>
int stack[1000],choice,n,top,x,i;
int push();
void pop();
void display();
int main()
{
	top=-1;
	printf("enter the size of stack");
	scanf("%d",&n);
	printf("stack operations using array");
	printf("\nt1.push\nt2.pop\nt3.display\nt4.exit");
	do
	{
		printf("\n enter the choice");
		scanf("%d",&choice);
		switch(choice)
	{
		case 1:printf("enter the value to be added");
		scanf("%d",&x);
		push(x);
		break;
		case 2:pop();
		break;
		case 3:display();
		break;
		case 4:printf("exit point");
		break;
		default:printf("enter any choice");
	}
}
	while(choice!=4);
	return 0;
}
int push()
{
	if(top>=n-1)
	{
		printf("stack is full");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("stack is underflow");
	}
	else
	{
		printf("deleted item is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("the elements in stack\n");
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
	else
	{
		printf("stack is empty");
	}
}




