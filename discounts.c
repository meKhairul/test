#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main()
{
	int n,m,i,sum,sum1=0,temp,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum1=sum1+a[i];
	}
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	qsort(a,n,sizeof (int),cmpfunc);
	for(j=0;j<m;j++)
	{
		sum=sum1-a[n-(b[j]-1+1)];
		printf("%d\n",sum);
	}

	return 0;
}