#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int k,m,r;
	cin>>k>>r;
	for (int i=1;i<1000;i++)
	{
		m=k*i;
		if (m%10==0 || (m-r)%10==0)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}
		