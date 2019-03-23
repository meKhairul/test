#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,k=0;
    string s,d,c;
    cin>>s;
    int count[s.length()];
    for (i=0; i<s.length(); i++)
    {
        count[i]=1;
        k++;
        d=s.substr(0,i+1);
        for (j=i+1; j<s.length(); j+=k)
        {
            c=s.substr(j,k);
            if (d==c)
            {
                count[i]++;
                continue;
            }
            break;
        }
    }
    //cout<<count<<endl;
    sort(count,count+s.length());
    for (i=s.length()-1; i>=0; i--)
    {
        if (count[i]>1 && s.length()%count[i]==0)
        {
            cout<<"periodic"<<"    "<<(s.length()/count[i]) <<endl;
            return 0;
        }
        else if (count[i]==1)
        {
            cout << "not periodic" << endl;
            return 0;
        }
    }
    return 0;
}