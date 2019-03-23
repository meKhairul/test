#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int x,a,b;
	cin>>x;
	for (a=x;a>=1;a--)
	{
		for (b=1;b<=x;b++)
		if ((a%b)==0 && (a*b)>x && (a/b)<x)
		{
			cout<<a<<" "<<b<<endl;
			return 0;
		}
	}
	cout<<"-1"<<endl;
}