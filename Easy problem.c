#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			count++;
		}
	}
	if(count==n)
	{
		printf("EASY");
	}
	else
	{
		printf("HARD");
	}
	return 0;
}