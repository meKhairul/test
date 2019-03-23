#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,m,i,sum,sum1=0,temp,j;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum1=sum1+a[i];
	}
	cin>>m;
	int b[m];
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	for(j=0;j<m;j++)
	{
		sum=sum1-a[n-(b[j]-1+1)];
		cout<<sum<<endl;
	}

	return 0;
}