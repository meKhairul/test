#include<stdio.h>
int main()
{
	int a=0,b=1,n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<(n+1)/2;i++)
	{
		sum+=a+b;
		a=a+b;
		b=a+b;
	}
	printf("%d",sum);
}