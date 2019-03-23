#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=0,n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                count++;
                s[i]='0';
                continue;
            }
            else
            {
                break;
            }
        }
    	//printf("%d",count);
    }
    printf("%d",count);
    return 0;
}
    