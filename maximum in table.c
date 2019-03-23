#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==0 || i==0)
			{
				a[i][j]=1;
				//printf("%d\n",a[i][j]);
			}
			else if(i!=0&&j!=0)
			{
				//printf("%d\n",a[0][1]);
			a[i][j]=a[i-1][j]+a[i][j-1];
			//printf("%d",a[i][j]);
			}
		}
	}
	printf("%d",a[i-1][j-1]);
	return 0;
}