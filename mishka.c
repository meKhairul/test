#include<stdio.h>
int main()
{
	int n,j,i,count1=0,count2=0;
	scanf("%d",&n);
	int a[2];
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[j]);
		}
		if(a[0]>a[1])
		{
			count1++;
		}
		else if(a[1]>a[0])
		{
			count2++;
		}
		else
		{
			continue;
		}
	}
	if(count1>count2)
	{
		printf("Mishka");
	}
	else if(count2>count1)
	{
		printf("Chris");
	}
	else
	{
		printf("Friendship is magic!^^");
	}
	return 0;
}
