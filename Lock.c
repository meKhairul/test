#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n,sum=0,dif;
	scanf("%d",&n);
	char s1[n],s2[n];
	scanf("%s %s",s1,s2);
	for(int i=0;i<n;i++)
	{
		dif=abs(s1[i]-s2[i]);
		if(dif<=5)
		{
			sum+=dif;
		}
		else
		{
			sum+=(10-dif);
		}
	}
	printf("%d",sum);
	return 0;
}