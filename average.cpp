#include<iostream>
using namespace std;
int main()
{
	int n,i;
	float avg=0,sum=0;
	cin>>n;
	int x[100];
	for (i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(i=0;i<n;i++)
	{
		avg=(sum+x[i])/(float)(i+1);
		sum=sum+x[i];
		cout<<avg<<endl;
	}
}