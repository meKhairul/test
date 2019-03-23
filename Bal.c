#include<stdio.h>
int main()
{
	int n,i,j,h,c=0;
	scanf("%d %d",&n,&h);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>h)
		{
			c=c+2;
		}
		else
		{
			c++;
		}
	}
	printf("%d",c);
	return 0;
}