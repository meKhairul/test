#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,count=0,x;
	char s[1000];
	fgets(s,sizeof s,stdin);
	for(i=1;s[i]!='\0';i+=3)
	{
		for(j=i+3;s[j]!='\0';j+=3)
		{
			if(s[i]==s[j])
			{
				count++;
				s[i]='0';
			}
		}
	}
	//printf("%d",count);
	if(strlen(s)<=3)
	{
		printf("0");
	}
	else
	{
	x=(strlen(s)+1)/3;
	printf("%d\n",(x-count));
	}
	return 0;
}