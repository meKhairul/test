#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cin>>n;
	char a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
		if(((int)(a[i])-48)%2==0)
		{
			count+=i+1;
		}
	}
	cout<<count<<endl;
	return 0;
}