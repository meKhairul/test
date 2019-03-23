#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y,z,r,t;
	cin>>x>>y>>z;
	if ((x+y)>z)
	{
		r=0;
	}
	else
	{
		r=z-(x+y)+1;
		cout<<r<<endl;
		return 0;
	}
	if ((x+z)>y)
	{
		r=0;
	}
	else
	{
		r=y-(x+z)+1;
		cout<<r<<endl;
		return 0;
	}
	if ((y+z)<=x)
	{
		r=x-(y+z)+1;
		cout<<r<<endl;
		return 0;
	}
	else
	{
		r=0;
		cout<<r<<endl;
	}
	return 0;
}
	