#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,result,steps;
	cin>>n>>m;
					steps=(n-1)+(min(abs(n-m),abs(m-1)));
	//cout<<steps<<endl;
	result=n*2+steps+1;
	cout<<result<<endl;
	return 0;
}