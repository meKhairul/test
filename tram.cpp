#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,a,b,r=0,m=0;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a>>b;
		r=r+b-a;
		if (r>m)
		{
			m=r;
		}
	}
	cout<<m<<endl;
	return 0;
}