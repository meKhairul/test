#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,i,j;
	char table[2],hand[2];
	scanf("%s",table);
	for (i=0;i<5;i++)
	{
		scanf("%s",hand);
		for (j=0;j<2;j++)
		{
			if (hand[j]==table[j])
			{
				printf("YES\n");
				return 0;
			}
			else 
			{
				count++;
			}
		}
	}
	if (count==10)
	{
		printf("NO");
	}
	return 0;
}