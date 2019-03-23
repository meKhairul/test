#include<iostream>
using namespace std;
int main()
{
	int a,sum,b,i,fact1=1,fact2=1;
	cin >>a >> b;
	for (i=2;i<=a;i++){
		fact1=fact1*i;
	}
	
	for (i=2;i<=b;i++){
		fact2=fact2*i;
	}
	sum=fact1+fact2;
	cout<< sum<<endl;
	return 0;
	
}