#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int i,sum=0;
	int a[3];
	for (i=0;i<3;i++)
	{
		cin>>a[i];
	}
	sort(a,a+3);
	for (i=2;i>=1;i--)
	{
		sum+=a[i]-a[i-1];
	}
	cout<<sum<<endl;
	return 0;
}