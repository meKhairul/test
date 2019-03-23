#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	i=n-1;
	if(n==1)
	{
		cout<<"1"<<endl;
		return 0;
	}
	if(n%i!=0)
		{
			n=n-i;
		}
	cout<<n<<endl;
	return 0;
}