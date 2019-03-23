#include<stdio.h>
#include<string.h>
int main()
{
    int result,i;
    char s1[1000];
    char s2[1000];
    scanf("%s",s1);
    scanf("%s",s2);
    if(strlen(s1)==strlen(s2))
    {
        for(i=0;i<strlen(s1);i++)
        {
        if(s1[i]>='a' && s1[i]<='z')
        {
            s1[i]=s1[i]-'a'+ 'A';
        }
        else
        {
            s1[i]=s1[i];
        }
        if(s2[i]>='a' && s2[i]<='z')
        {
            s2[i]=s2[i]-'a'+ 'A';
        }
        else
        {
            s2[i]=s2[i];
        }
        result=strcmp(s1,s2);
    }
    }
    printf("%d",result);
    return 0;
}
