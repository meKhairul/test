#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	double result,r,pi,a;
	for (i=1;i<=n;i++)
	{
		scanf("%lf",&r);
		printf("Case %d: ",i);
		pi=2*acos(0.0);
		a=2*r;
		result=a*a-pi*r*r+pow(10,-9);
		printf("%.2lf\n",result);
	}
	return 0;
}