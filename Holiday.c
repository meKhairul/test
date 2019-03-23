#include<stdio.h>
int main()
{
	int n,x,y;
	scanf("%d",&n);
	x=n/7;
	if(n%7 <=2)
	{
		y=x*2+n%7;
	}
	else
	{
		y=x*2+2;
	}
	if(n%7==6)
	{
		x=x*2+1;
	}
	else
	{
		x=x*2;
	}
	printf("%d %d",x,y);
	return 0;
}