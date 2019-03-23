#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int a[n],count[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		count[i]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count[i]++;
				continue;
			}
			else
			{
				break;
			}
		}
	}
	sort(count,count+n);
	for(i=n-1,j=i-1;i>=0;i--,j--)
	{
		if(count[i]==count[j])
		{
			cout<<2*count[i]<<endl;
			break;
		}
	}
	return 0;
}