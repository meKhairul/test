#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,count=0;
	cin>>n;
	int a[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]<a[i-1] && i>1)
		{
			a[i]=a[i-1];
			//cout<<a[i]<<"<"<<a[i-1]<<endl;
			continue;
		}
		else if(a[i]==i)
		{
				count++;
		}
	}
	cout<<count<<endl;
	return 0;
}