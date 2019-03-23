#include<stdio.h>
#include<math.h>
int looping(int c[])
int main()
{
    long long int n,m,i, j,l;
    scanf("%I64d %I64d",&n, &m );

    int p[n], s[n], b[n];
    int inc[m], pre[m];
    int count[m];
    for(i=0; i<n; i++)
    {
        scanf("%I64d", &p[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%I64d", &s[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%I64d", &b[i]);
    }
    for(i=0; i<m; i++)
    {
        scanf("%I64d", &inc[i]);
    }
    for(i=0; i<m; i++)
    {
        scanf("%I64d", &pre[i]);
    }
    for(i=0; i<m; i++)
    {
        l=0;
        for(j=0; j<n; j++)
        {
            if((inc[i]>=p[j] && inc[i]<=s[j]) && (abs(b[j]-pre[i])<=inc[i]-p[j]))
            {
                //d[i][l]=j;
                l++;
            }
            if(j==n-1)
            {
                printf("%I64d ",l);
            }
        }
    }
    return 0;
}