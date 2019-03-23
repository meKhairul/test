#include<stdio.h>
int main()
{
	int n,m,i,j,count=0;
	scanf("%d %d",&n,&m);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{ 
		for(j=i+1;j<n;j++)
		{
			if((a[i]%m==1 && a[j]%m==(m-1))||(a[i]%m==0 && a[j]%m==0 && a[i]!=0 && a[j]!=0))
			{ 
				count+=2;
				a[i]=0; 
				a[j]=0; 
			}
		} 
	} 
	printf("%d",count); 
	return 0;
}