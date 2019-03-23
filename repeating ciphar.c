#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	for (i=0,k=0;k<strlen(s);i++,k+=i)
	{
		s[i]=s[k];
	}
	s[i]='\0';
	printf("%s",s);
	return 0;
}