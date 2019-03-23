#include<stdio.h>
#include<math.h>

int main()
{
	int n,sum=0;
	scanf("%d",&n);
	int x[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		sum+=x[i];
	}
	printf("%.12f\n",(sum/(float)(n)));
	return 0;
}