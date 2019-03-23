#include<stdio.h>
#include<math.h>
int main()
{
	int c,d,m;
	char s1[2],s2[2];
	scanf("%s %s",s1,s2);
	c=abs((int)(s1[0])-(int)(s2[0]));
	d=abs((int)(s1[1])-(int)(s2[1]));
	if (c>d)
	m=c;
	else
	m=d;
	printf("%d\n",m);
	char x=s1[0];
	char y=s2[0];
	//printf("%d %d %d %d",x,y,c,d);
	for (int i=0;i<m;i++)
	{
		if (s1[0]==s2[0])
		{
			(s1[1]>s2[1])?printf("D\n"):printf("U\n");
		}
		else if (s1[1]==s2[1])
		{
			(s1[0]>s2[0])?printf("L\n"):printf("R\n");
		}
		else if (s1[0]>s2[0])
		{
			if (s1[1]>s2[1])
			{
				printf("LD\n");
				s1[1]--;
			}
			else
			{
				printf("LU\n");
				s2[1]--;
			}
			s1[0]--;
		}
		else if (s1[0]<s2[0])
		{
			if (s1[1]>s2[1])
			{
				printf("RD\n");
				s1[1]--;
			}
			else
			{
				printf("RU\n");
				s2[1]--;
			}
			s2[0]--;
		}
	}
	return 0;
}