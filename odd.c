#include<stdio.h>
int main()
{
	int num=1,i;
	while(num!=10)
	{
		if(num%2==0)
		{
			i++;
			continue;
		}
		printf("%d",num);
	}
	return 0;
}

	
