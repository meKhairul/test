#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int n,m,a,c=0;
	cin>>n>>m;
	char ch;
	for (int i=0;i<n;i++)
	{
		cin>>ch>>a;
		if (ch=='+')
		{
			m=m+a;
		}
		else if (ch=='-')
		{
			if (m<a)
			{
				m=m;
				c++;
			}
			else
			{
				m=m-a;
			}
		}
	}
	cout<<m<<" "<<c<<endl;
	return 0;
}