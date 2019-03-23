#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,x;
	scanf("%d %d",&a,&b);
	x=pow(a,b)-pow(b,a);
	printf("%d",x);
	return 0;
}