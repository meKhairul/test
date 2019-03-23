#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	string s[n],a[n];
	for (i=0;i<n;i++)
	{
		cin>>s[i];
	}
	a[0]="NO";
	for (i=n-1;i>=0;i--)
	{
		for (j=i-1;j>=0;j--)
		{
			if (s[i]==s[j] && j<i)
			{
				a[i]="YES";
				break;
			}
			else if (j==0)
			{
				a[i]="NO";
				//cout<<a[i]<<" "<<i<<endl;
				break;
			}
			else
			{
				continue;
			}
		}
	//cout<<a[k]<<endl;
	}
	for (i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}