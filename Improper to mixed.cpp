#include<iostream>
using namespace std;
int main()
{
	int x,y,a,b;
	cin>>x>>y;
	if (x>y)
	{
		a=x/y;
		b=x%y;
	}
	cout<<a<<" "<<b<<" "<<y<<" "<<endl;
}