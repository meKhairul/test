#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,i,j,k,temp;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for (j=i,k=0;k<m;j++,k++)
		{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
			cout<<a[i][k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}