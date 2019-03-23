#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count;
    char s[100];
    fgets(s,sizeof s,stdin);
    for(i=0; s[i]!='\0'; i++)
    {
        count=0;
        for(j=i+1; s[j]!='\0';)
        {
            if(s[i]==s[j])
            {
                count++;
                j++;
            }
            else
            {
                break;
            }
        }
        if(count>=6)
        {
            printf("YES\n");
            break;
        }
    }
    if(count<6)
    {
        printf("NO\n");
    }
    return 0;
}
