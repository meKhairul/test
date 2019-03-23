#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,r;
	cin>>a>>b>>c;
	if((a+b)<=c)
	{
		r=(a+b)*2;
	}
	else if((a+b)>c*2)
	{
		r=(min(a,b))*2+c*2;
	}
	else
	{
		r=a+b+c;
	}
	cout<<r<<endl;
	return 0;
}