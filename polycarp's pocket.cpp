#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int a[n],count[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		count[i]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count[i]++;
			}
		}
	}
	sort(count,count+n);
	cout<<count[n-1]<<endl;
}