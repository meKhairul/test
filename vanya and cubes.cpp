#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,c=0,k;
	cin>>n;
	for(i=1,k=2;i<=n+1;)
	{
		if (n>=i)
		{
			c++;
		}
		i+=(k*(k+1))/2;
		k++;
		//cout<<i<<endl;
	}
	cout<<c<<endl;
	return 0;
}