#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,i,j,k;
	cin>>n;
	int a[n],count[n],b[n*2];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (i=0,k=0;i<n*2;i++)
	{
		b[i]=a[k];
		k++;
		if (k==n)
		{
			k=0;
		}
		count[i]=0;
		//cout<<b[i]<<" ";
	}
	for (i=0;i<n*2;i++)
	{
		if (b[i]==1)
		{
			count[i]=1;
		}
		for (j=i+1;j<n*2;j++)
		{
			if (b[i]==1 && b[i]==b[j])
				{
				count[i]++;
				continue;
				}
			else
			{
				break;
			}
		}
	}
	sort(count,count+n*2);
	cout<<count[(n*2)-1]<<endl;
	return 0;
}