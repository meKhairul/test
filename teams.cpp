#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,sum=0;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for (i=n-1;i>=1;i-=2)
	{
		sum+=a[i]-a[i-1];
	}
	cout<<sum<<endl;
	return 0;
}