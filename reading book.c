#include<stdio.h>
int main()
{
	int n,k,i,result;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(b[i]>=k && a[i]<=k)
		{
			result=n-i;
			printf("%d",result);
			break;
		}
	}
	return 0;
}