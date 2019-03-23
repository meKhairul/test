#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	scanf("%s",s);
	int i,j,count=0;
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]==s[j])
			{
				count++;
				s[i]='0';
			}
		}
	}
	if((strlen(s)-count)%2!=0)
	{
		printf("IGNORE HIM!\n");
	}
	else
	{
		printf("CHAT WITH HER!\n");
	}
	return 0;
}