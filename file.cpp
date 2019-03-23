#include<stdio.h>
#include<string.h> 
int main()
{
	int n,i,j,m=0,c;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	for (i=0;i<n;i+=c)
	{
		c=1;
		for (j=i+1;j<n;j++)
		{
			if (s[i]=='x')
			{
				if (s[i]==s[j])
				{
					c++;
				}
			}
			if (c>=3)
			{
				m+=c-2;
			}
			else
			{
				m=m;
			}
		}
	}
	printf("%d",m);
	return 0;
}