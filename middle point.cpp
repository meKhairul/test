#include<iostream>
using namespace std;
int main()
{
	int h1,m1,h2,m2,h3,m3,k,l;
	char c1,c2;
	cin>>h1>>c1>>m1>>h2>>c2>>m2;
	k=h1*60+m1;
	l=h2*60+m2;
	k=(k+l)/2;
	h3=k/60;
	m3=k%60;
	if(m3<=9&&h3<=9)
	{
		cout<<"0"<<h3<<":0"<<m3<<endl;
	}
	else if(m3<=9&&h3>9)
	{
		cout<<h3<<":0"<<m3<<endl;
	}
	else if(m3>9&&h3<=9)
	{
		cout<<"0"<<h3<<":"<<m3<<endl;
	}
	else
	{
		cout<<h3<<":"<<m3<<endl;
	}
	return 0;
}