#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s[101],s2[101],k[101];
	scanf("%s",s);
	scanf("%s",s2);
	for (i=0;i<strlen(s);i++)
	{
		if((s[i]=='1'&&s2[i]=='1')||(s[i]=='0'&&s2[i]=='0'))
		{
			k[i]='0';
		}
		else if (s[i]=='1'&&s2[i]=='0')
		{
			k[i]='1';
		}
		else if (s[i]=='0'&&s2[i]=='1')
		{
			k[i]='1';
		}
	}
	k[i]='\0';
	printf("%s",k);
}