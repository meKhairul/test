#include<stdio.h>

int main()
{
	unsigned long long int i,j,n,k,l;
	scanf("%llu %llu",&n,&k);
	unsigned long long int a[n];
	for (i=1,j=0;i<=n;i=i+2,j++){
		a[j]=i;
	}
	for (j=j,l=2;l<=n;l=l+2,j++){
		a[j]=l;
	}
	printf("%llu",a[k-1]);
	return 0;
}
    