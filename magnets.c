#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,count=0,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=i+1;i<n;i++,j++)
	{
		if(n==1)
		{
			count=1;
			break;
		}
		else if(a[i]!=a[j])
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}