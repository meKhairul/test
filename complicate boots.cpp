#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,count=0,i,j,k=0;
	cin>>n;
	int flag[n],flag2[n];
	string l,r;
	cin>>l>>r;
	for(i=0;l[i]!='\0';i++)
	{
		for(j=0;r[j]!='\0';j++)
		{
			if(l[i]==r[j])
			{
				count++;
				l[i]='0';
				r[j]='0';
				flag[k]=i+1;
				flag2[k]=j+1;
				k++;
				break;
			}
		}
	}
	cout<<count<<endl;
	for(i=0;i<k;i++)
	{
		cout<<flag[i]<<" "<<flag2[i]<<endl;
	}
}