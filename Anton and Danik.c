#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,count1=0,count2=0;
	scanf("%d",&n);
	char s[n];
	for(i=0;i<n;i++)
	{
		scanf(" %c",&s[i]);
	}
	s[i]='\0';
	//printf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='A')
		{
			count1++;
		}
		if(s[i]=='D')
		{
			count2++;
		}
	}
	if(count1>count2)
	{
		printf("Anton\n");
	}
	else if(count1<count2)
	{
		printf("Danik\n");
	}
	if(count1==count2)
	{
		printf("Friendship\n");
	}
	return 0;
}