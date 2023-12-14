#include<stdio.h>
	
int main()
{
	int a[3],i,l,n;
	printf("entervthe array size");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
   	}
	printf("\nenter the search element");
	scanf("%d",&l);
	for(i=0 ;i<n;i++)
	{

	 if(a[i]=l)
	{
		printf("%d key found in array at %d",l,i+1 );
		
	return (0);
	}
	}
	printf("key not found");
}
	
