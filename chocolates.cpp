#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int n,i,c=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=n-1;i>=0;i--)
	{
		if(a[i-1]>=a[i])
		{
			a[i-1]=a[i]-1;
			if(a[i-1]<0)
			{
				a[i-1]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		c+=a[i];
	}
	cout<<c<<endl;
	return 0;
}