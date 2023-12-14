#include<stdio.h>
#include<stdlib.h>
int main()
{
 	int num=10;
 	printf("the value of num is:%d\n",num);
 	
	printf("the address of num is:%p\n",&num);
	int *ptr;
	ptr=&num;
	printf("the value of num is:%d through pointer\n",*ptr);
	printf("the address of num is:%p through pointer\n",ptr);
	int *q;
	q(int*)malloc(sizeof(int));
	*q=50;
	printf("the address of num is:%p\n",q);
	printf("the value of num is:%d\n",*q);
	return 0;
}

