#include<iostream>
using namespace std;
int main()
{
	int k,n,w,total=0;
	cin>>k>>n>>w;
	for(int i=1;i<=w;i++)
	{
		total+=i*k;
	}
	total=total-n;
	if(total>0)
	{
		cout<<total<<endl;
	}
	else
	{
		cout<<"0"<<endl;
	}
	return 0;
}