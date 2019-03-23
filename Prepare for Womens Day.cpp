#include<bits/stdc++.h>
using namespace std;
int n,k;
int d[105];
int main() {

    cin>>n>>k;
    for(int i=0;i<=100;i++) 
    d[i]=0;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        d[num%k]++;
    }
    int sum=0;

    for(int i=0;i<k;i++)
    {
        if(i==0) 
        sum+=(d[i]/2)*2;
        else if(k%2==0&&i==k/2) 
        sum+=(d[i]/2)*2;
        else 
        sum+=min(d[i],d[k-i]);
        //cout<<sum<<endl;
    }
    cout<<sum<<"\n";
    return 0;
}