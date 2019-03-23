#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,x,y,z,sum=0;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>x>>y>>z;
		sum+=x+y+z;
	}
	if (sum==0)
	{
		cout<<"YES"<<endl;
	}
	else 
	{
		cout<<"NO"<<endl;
	}
	return 0;
}