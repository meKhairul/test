#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=0;i<100;i++)
	{
		if(a>b)
		{
			printf("%d",i);
			break;
		}
		a=3*a;
		b=2*b;
	}
	return 0;
}