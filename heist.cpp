#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,j,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for (i=0;i<n-1;i++)
	{
		if (a[i]+1!=a[i+1])
		{
			count+=(a[i+1]-(a[i]+1));
		}
	}
	cout<<count<<endl;
	return 0;
}