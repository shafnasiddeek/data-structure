#include<stdio.h>
int add(int newarray[5])
{
	
	int sum=0,i;
	for(i=0;i<5;i++)
	{
		sum=sum+newarray[i];
	}
	return(sum);
	
}
int main()
{
	int a[5]={2,3,3,4,5};
	int sum;
	sum=add(a);
	printf("sum is %d",sum);
}

