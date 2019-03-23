#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int n,k,i,c=0,d=0;
	cin>>n>>k;
	for(i=1;n>=k;i++)
	{
		if(i%2==1)
		{
			c++;
			n=n-k;
		}
		else
		{
			d++;
			n=n-k;
		}
	}
	if(c>d)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}