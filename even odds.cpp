#include<iostream>
using namespace std;
int main()
{
	long long int n,x,k;
	cin>>n>>k;
	x=n;
	n=(n+1)/2;
	if(k<=n)
	{
		k=2*k-1;
	}
	else
	{
		k=2*(k-n);
	}
	cout<<k<<endl;
	return 0;
}
    
    