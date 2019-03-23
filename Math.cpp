#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int x[9];
	x[0]=a+(b*c);
	x[1]=a*(b+c);
	x[2]=a*b*c;
	x[3]=(a+b)*c;
	x[4]=a+b+c;
	x[5]=(a*b)+c;
	x[6]=max(x[0],x[1]);
	//cout<<x[6]<<endl;
	x[7]=max(x[2],x[3]);
	//cout<<x[7]<<endl;
	x[8]=max(x[4],x[5]);
	//cout<<x[8]<<endl;
	if(x[6]>=x[7] && x[6]>=x[8])
	{
		cout<<x[6]<<endl;
	}
	else if (x[7]>=x[6] && x[7]>=x[8])
	{
		cout<<x[7]<<endl;
	}
	else
	{
		cout<<x[8]<<endl;
	}
	return 0;
}