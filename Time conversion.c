#include<stdio.h>
int main()
{
	int N,a,b,c,d,e,f;
	scanf("%d",&N);
	a=N/3600;
	b=N%3600;
	c=b/60;
	d=b%60;
	e=d/60;
	f=d%60;
	printf("%d:%d:%d",a,c,f);
	return 0;
}