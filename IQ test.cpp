#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,count1=0,count2=0,k,l;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			count1++;
			k=i+1;
			continue;
		}
		else
		{
			count2++;
			l=i+1;
			continue;
		}
	}
	if(count1<count2)
	{
		cout<<k;
	}
	else
	{
		cout<<l;
	}
	return 0;
}