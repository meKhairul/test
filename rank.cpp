#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,count=0,n,m,m2;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	m=a[0];
	m2=a[0];
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[j]<m)
			{
				m=a[j];
				count++;
				break;
			}
			else if (a[j]>m2)
			{
				m2=a[j];
				count++;
				break;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}