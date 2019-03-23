#include<stdio.h>
void convertword(int x)
{
	int a,b,c,d;
	a=x/1000;
	x=x%1000;
	b=x/100;
	x=x%100;
	c=x/10;
	if (a==1)
	{
		printf("One Thousand ");
	}
	if (a==2)
	{
		printf("Two Thousand ");
	}
	if (a==3)
	{
		printf("Three Thousand ");
	}
	if (a==4)
	{
		printf("Four Thousand ");
	}
	if (a==5)
	{
		printf("Five Thousand ");
	}
	if (a==6)
	{
		printf("Six Thousand ");
	}
	if (a==7)
	{
		printf("Seven Thousand ");
	}
	if (a==8)
	{
		printf("Eight Thousand ");
	}
	if (a==9)
	{
		printf("Nine Thousand ");
	}			
}
int main()
{
	int n;
	scanf("%d",&n);
	convertword(n);
	return 0;
}