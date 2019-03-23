#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k=0,count,count2=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		count=0;
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[j]);
	}
	for(k=0;k<3;k++)
	{
	if(a[k]==1)
	{
		count++;
	}
	}
	if(count>=2)
	{
		count2++;
	}
	}
	printf("%d",count2);
	
	
}