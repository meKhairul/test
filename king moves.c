#include<stdio.h>
#include<string.h>
int main()
{
	char s[2];
	scanf("%s",s);
	if((s[0]=='a'|| s[0]=='h') && (s[1]=='1'||s[1]=='8'))
	{
		printf("3");
	}
	else if((s[0]=='a' || s[0]=='h') && (s[1]>='2' && s[1]<='7'))
	{
		printf("5");
	}
	else if((s[0]>='b' && s[0]<='g')&&(s[1]=='1' || s[1]=='8'))
	{
		printf("5");
	}
	else
	{
		printf("8");
	}
	return 0;
}