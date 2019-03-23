#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,l,r,d,x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>l>>r>>d;
		x=d;
		for(;;)
		{
			if(x%d==0 && (x<l || x>r))
			{
				cout<<x<<endl;
				break;
			}
			else
			{
				x++;
				continue;
			}
		}
	}
	return 0;
}