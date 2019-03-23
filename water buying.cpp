#include<iostream> 
#include<cmath> 
#include<algorithm> 
using namespace std; 
int main() 
{ 
	long long int n,i,r,a,b,c; 
	cin>>n; 
	for (i=0;i<n;i++) 
	{ cin>>a>>b>>c; 
		if (a==1) 
		{ 
			r=b; 
			cout<<r<<endl; 
			continue; 
		} 
		if(b<=(double)(c)/2) 
		{ 
			r=a*b; 
			cout<<r<<endl; 
			continue; 
		} 
		else 
		{ 
			r=(a/2)*c+(a%2)*b; 
			cout<<r<<endl; 
			continue; 
		} 
	} 
	return 0; 
}
    