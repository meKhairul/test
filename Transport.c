#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,count=0;
	char t[1000];
	char s[1000];
	scanf("%s",t);
	scanf("%s",s);
	for(i=0,j=strlen(t)-1;t[i]!='\0'&&j>=0;i++,j--)
	{
		if(t[i]==s[j]){
			count++;
		}
	}
	if(count==strlen(t))
	{
		printf("YES\n");
	}
	else 
	{
		printf("NO\n");
	}
	return 0;
}