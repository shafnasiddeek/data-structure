#include<stdio.h>
void mergearray(int a[],int s1,int b[],int s2,int merge[])
{
	int i=0;
	for(i=0;i<s1;i++)
	merge[i]=a[i];
	for(i=0;i<s2;i++)
	merge[i+s1]=b[i];
}
void sortarray(int merge[],int s)
{
	int t;
	for(int i=0;i<s;i++)
	{
		for(int j=i+1;j<s;j++)
		{	
		 if(merge[i]>merge[j])
		 {
		  t=merge[i];
		  merge[i]=merge[j];
		  merge[j]=t;
		 }
		}
	}
}
int main()
{
	int s1,s2,s;
	printf("enter the size of first array");
	scanf("%d",&s1);
	int a[s1];
	printf("enter the elemernts of first arry");
	for(int i=0;i<s1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the size of secvond array");
	scanf("%d",&s2);
	int b[s2];
	printf("enter the elements of second array");
	for(int i=0;i<s2;i++)
	{
		scanf("%d",&b[i]);
	}
	int merge[s1+s2];
	s=s1+s2;
	mergearray(a,s1,b,s2,merge);
	sortarray(merge,s);
	printf("merged and sorted array");
	for(int i=0;i<s;i++)
	{
		printf("%d",merge[i]);
		printf("\n");
	}
return 0;
}

