#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,n,count=1,m=1,k;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (i=0,j=1;i<n&&j<n;i++,j++)
	{
			if (a[i]<=a[j])
			{
				count=count+1;
				if (count>m)
				{
					m=count;
				}
			}
			else
			{
				count=1;
			}
	}
	cout<<m<<endl;
	return 0;
}