#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int s,n,i,c=0,j,temp;
	cin>>s>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
		}
		}
		//cout<<a[i]<<b[i]<<endl;
	}
	for(i=0;i<n;i++)
	{
		if(s>a[i])
		{
			c++;
			s=s+b[i];
		}
	}
	if(c==n)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}