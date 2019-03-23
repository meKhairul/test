#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,m;
	cin>>a>>b;
	if (a==0 && b==0)
	{
		cout<<"NO"<<endl;
	}
	else if ((b-a)==1 || (a-b)==1 || a==b)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}