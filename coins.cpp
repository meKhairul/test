#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;;i++)
	{
		if(n*i>=m)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}