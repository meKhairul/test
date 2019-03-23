#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,i,a,b,k,t;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a>>b>>k;
		if (k%2==0)
		{
			t=(a-b)*(k/2);
			cout<<t<<endl;
		}
		else
		{
			t=(a-b)*(k+1)/2+b;
			cout<<t<<endl;
		}
	}
	return 0;
}