#include<iostream>
using namespace std;
int main()
{
	int x,i,sum=0;
	int a[5],b[]={5,4,3,2,1};
	cin>>x;
	for(i=0;i<5;i++)
	{
		a[i]=x/b[i];
		x=x%b[i];
		sum=sum+a[i];
	}
	cout<<sum<<endl;
	return 0;
}