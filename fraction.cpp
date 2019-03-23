#include<iostream>
#include<cmath>
using namespace std;
int prime(int ,int ,int );
int main()
{
	int x,m,i,a,b;
	cin>>x;
	if (x%2==0)
	{
		m=x/2;
		a=m-1;
		b=m+1;
	}
	else
	{
		m=(x+1)/2;
		a=m-1;
		b=m;
	}
	for (i=0;i<x;i++)
	{
		
		if (prime(a,b,x))
		{
		cout<<a<<" "<<b<<endl;
		return 0;
		}
		else
		{
			a-=1;
			b+=1;
		}
	}
	return 0;
}
int prime(int x,int y,int z)
{
	int i,j;
	for (i=2;i<z;i++)
	{
		if(x%i==0 && y%i==0)
		{
			return 0;
		}
		else
		{
			continue;
		}
	}
	return 1;
}