#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,j,k,c1=0,c2=0,c3=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
			c1++;
		}
		if(a[i]==2)
		{
			c2++;
		}
		if(a[i]==3)
		{
			c3++;
		}
	}
	int m=c1;
	if (c2<m)
	{
		m=c2;
	}
	if(c3<m)
	{
		m=c3;
	}
	if (c1==0 || c2==0 || c3==0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	cout<<m<<endl;
	for (i=0;i<m;i++)
	{
		for(j=0,k=1;j<n;j++)
		{
			if(a[j]==k)
			{
				a[j]=0;
				cout<<j+1<<" ";
				k++;
				j=0;
			}
			else
			{
			continue;
			}
		}
		cout<<endl;
	}
	return 0;
}