#include<stdio.h>
void modifyarray(int newarray[5],int index,int num)
{
	newarray[3]=35;
}

int main()
{
 	int array[5]={10,20,30,40,50};
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",array[i]);
	}
	modifyarray(array,3,35);
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d",array[i]);
	}
return(0);
}
