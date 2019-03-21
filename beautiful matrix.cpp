#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,j,k;
    int a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                k=abs(2-i)+abs(2-j);
                cout<<k<<endl;
                break;
            }
        }
    }
    return 0;
}
