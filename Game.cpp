#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n1,n2,k1,k2;
	cin>>n1>>n2>>k1>>k2;
	int m=max(n1,n2);
	for (int i=0;i<m;i++)
	{
		n1=n1-1;
		n2=n2-1;
		if (n1==0)
		{
			cout<<"Second"<<endl;
			return 0;
		}
		if (n2==0)
		{
			cout<<"First"<<endl;
			return 0;
		}
	}
	return 0;
}