#include<stdio.h>

char setalphabets[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main()
{
	char set1[26],set2[26];
	int result(),i,n,m;
	printf("enter the size of first set");
	scanf("%d",&n);
	printf("enter the elements in set1");
	for(int i=0;i<=n;i++)
	{
		scanf("%d",set1[i]);
	}
	printf("enter the limit of set2");
	scanf("%d",&m);
	printf("enter the elements in second array");
	for(int i=0;i<=m;i++)
	{
		scanf("%d",set2[i]);
	}

return 0;
}
void setUnion(int set1[],int set2[])
{
	int i;
	for(i=0;i<setalphabets;i++)
	{
		n[i]=set1[i]+set2[i];
	}
}
void setDifference(set1[],set2[])
{
	int i,n;
	for(i=0;i<26;i<i++)
	{
		n[i]=set1[i]-set2[i];
	}
}
void setCompliment(set1[],set2[])
{
	
	
	

