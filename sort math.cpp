#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	long long int n,i,j,sum=0;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for (i=0,j=n-1;i<j;i++,j--)
	{
		sum=sum+pow((a[i]+a[j]),2);
	}
	cout<<sum<<endl;
}