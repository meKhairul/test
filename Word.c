#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	scanf("%s",s);
	int i,count1=0,count2=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a' && s[i]<='z'){
			count1++;
		}
		if(s[i]>='A' && s[i]<='Z')
		{
			count2++;
		}
	}
	for(i=0;s[i]!='\0';i++)
	{
		if(count1>=count2)
		{
			if(s[i]>='A'&& s[i]<='Z')
			{
			s[i]=s[i]-'A'+'a';
			}
			else {
			s[i]=s[i];
			}
		}
		else 
		{
			if(s[i]>='a' && s[i]<='z')
			{
				s[i]=s[i]-'a'+'A';
			}
			else
			{
				s[i]=s[i];
			}
		}
	}
	printf("%s",s);
}