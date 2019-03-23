#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,p,q,i,j,c=0,lev;
	cin>>n;
	cin>>p;
	int a[p];
	for(i=0;i<p;i++)
	{
		cin>>a[i];
	}
	cin>>q;
	int b[q];
	for(i=0;i<q;i++)
	{
		cin>>b[i];
	}
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
			if (a[i]==b[j])
			{
				c++;
			}
			else
			{
				continue;
			}
		}
	}
	lev=(p+q)-c;
	if (lev==n)
	{
		cout<<"I become the guy."<<endl;
	}
	else
	{
		cout<<"Oh, my keyboard!"<<endl;
	}
	return 0;
}