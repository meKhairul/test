#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i,j=0,k=0;
	scanf("%s",str1);
	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i]!='a'&&str1[i]!='A'&&str1[i]!='E'&&str1[i]!='e'&&str1[i]!='I'&&str1[i]!='i'&&str1!='U'&&str1[i]!='u'&&str1[i]!='Y'&&str1[i]!='y'&&str1[i]!='O'&&str1[i]!='o')
		{
			str2[j]=str1[i];
			k++;
			j++;
		}
	}
	for (j=0;j<k;j++)
	{
		if(str2[j]>='A'&&str2[j]<='Z')
		{
			str2[j]=str2[j]-'A'+'a';
		}
	}
	str2[k]='\0';
	for (i=0,j=0;i<k*2;i++)
	{
		str1[i]=str2[i];
		if (i%2==0)
		{
			str2[i]='.';
		}
		else
		{
			str2[i]=str1[j];
			j++;
		}
	}
	
		
	printf("%s",str2);
	return 0;
}