#include<iostream>
using namespace std;
int main()
{
	int n,i,a,b,c,d,x;
	cin>>n;
	for(i=0;i<100;i++)
	{
		x=n+1;
		a=x%10;
		x=x/10;
		b=x%10;
		x=x/10;
		c=x%10;
		x=x/10;
		d=x%10;
		if(a==b || b==c || c==d || a==c || b==d || a==d)
		{
			n++;
			x=n+1;
			a=x%10;
			x=x/10;
			b=x%10;
			x=x/10;
			c=x%10;
			x=x/10;
			d=x%10;
			if(a!=b && b!=c && c!=d && a!=c && b!=d && a!=d)
			{
				cout<<n+1<<endl;
				break;
			}
		}
		else
		{
			cout<<n+1;
			break;
		}
	}
	
	return 0;
}