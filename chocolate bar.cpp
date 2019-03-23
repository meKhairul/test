#include<iostream>
using namespace std;
int main()
{
	long int n,sum=0,i;
	cin>>n;
	int a[5];
	int b[]={100,20,10,5,1};
	for(i=0;i<5;i++)
	{
		a[i]=n/b[i];
		n=n%b[i];
		sum+=a[i];
		//printf("%d",a[i]);
	}
	cout<<sum;
	return 0;
}
