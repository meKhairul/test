#include<iostream>
using namespace std;
int main()
{
	int n,k,i,count=0;
	cin>>n>>k;
	if(n>=k)
	{
		int score[n];
		for(i=1;i<=n;i++)
		{
			cin>>score[i];
		}
		for (i=1;i<=n;i++)
		{
			if(score[i]>=score[k] && score[i]>0)
			{
			count++;
			}
		}
		cout<<count<<endl;
	}
	
}