#include<iostream>
using namespace std;
int main()
{
	int n,i,max;
	cin>>n;
	int x[n];
	for(i=0;i<n;i++){
		cin>>x[i];
	}
	max=x[0];
	for (i=0;i<n;i++){
		if (x[i]>max)
		{
			max=x[i];
		}
		else 
		{
			max=max;
		}
	}
	cout<<max<<endl;
}