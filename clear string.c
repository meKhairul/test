#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,count=0;
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
			}
		}
	}
	printf("%d",(strlen(s)-count));
	return 0;
}