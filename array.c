#include<stdio.h>
int main()
{
 	int a[50];
	int limit;
	int i, sum=0;
	printf("enter the limit of the array");
	scanf("%d",&limit);
	if(limit>=50)
	{
	 printf("enter the size below 50");
	}
 	else if(limit<=0)
	{
		printf("enter atleast one element:");
	}
	else                                                                                                                 
	{
         printf("enter the   elements");
	
		for(i=0;i<limit;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
	
	
	printf("sum of the elements are %d",sum);
	}
	return (0);
}
	
	
