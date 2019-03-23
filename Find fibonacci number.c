#include<stdio.h>
int fib(int );
int main()
{
	int x,r;
	scanf("%d",&x);
	r=fib(x);
	printf("%d",r);
	return 0;
}
int fib(int x)
{
	if(x==0){
		return 0;
	}
	if (x==1)
	{
		return 1;
	}
	else
	{
		return (fib(x-1)+fib(x-2));
	}
}