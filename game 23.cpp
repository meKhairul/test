#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,x,i;
	cin>>n>>m;
	x=m/n;
	if(m%n!=0)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	for(i=5;i<=x;i+=2)
	{
		if(i%3!=0 && x%i==0)
		{
			cout<<"-1"<<endl;
			return 0;
		}
	}
	for(i=0;x!=0;i++)
		{
		if (x%2==0)
		{
			x/=2;
		}
		else if(x%3==0)
		{
			x/=3;
		}
		else
		{
			break;
		}
	}
	cout<<i<<endl;
	
}