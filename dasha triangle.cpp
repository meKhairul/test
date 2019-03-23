#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,c=0,i;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort (a,a+n);
	for (i=n-1;i>=2;i--)
	{
		if (a[i]+a[i-1]>a[i-2] && a[i]+a[i-2]>a[i-1] && a[i-1]+a[i-2]>a[i])
		{
			cout<<"YES"<<endl;
			return 0;
		}
		else
		{
			c++;
		}
	}
	if (c==n-2)
	{
		cout<<"NO"<<endl;
	}
	return 0;
}