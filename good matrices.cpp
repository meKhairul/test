#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,j,sum=0;
	cin>>n;
	int a[n][n];
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			cin>>a[i][j];
			sum+=a[i][j];
		}
	}
	if (n<=3)
	{
		cout<<sum<<endl;
		return 0;
	}
	else
	{
		sum=0;
		for (i=0,j=0;i<n;i++,j++)
		{
			sum=sum+a[i][j];
		}
		for (i=2,j=0;j<n;j++)
		{
			sum+=a[i][j];
		}
		for (j=2,i=0;i<n;i++)
		{
			sum+=a[i][j];
		}
		for (i=n-1,j=0;i>=0;i--,j++)
		{
			sum+=a[i][j];
		}
	}
	sum=sum-a[(n-1)/2][(n-1)/2]*3;
	cout<<sum<<endl;
	return 0;
}