#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,k,l,count=0,x=0;
	cin>>n>>k;
	l=240-k;
	for(int i=1;i<=n;i++)
	{
		x=x+5*i;
		if (l>=x)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	cout<<count<<endl;
	return 0;
}