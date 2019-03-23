#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	char s[40];
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		if(s[0]=='I')
		{
			sum=sum+20;
		}
		else if(s[0]=='D')
		{
			sum=sum+12;
		}
		else if(s[0]=='T')
		{
			sum=sum+4;
		}
		else if(s[0]=='C')
		{
			sum=sum+6;
		}
		else if(s[0]=='O')
		{
			sum=sum+8;
		}
	}
	printf("%d",sum);
	return 0;
}