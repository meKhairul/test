#include<stdio.h>
int main()
{
	char a[20],b[20];
	gets(a);
	gets(b);
	printf("%s\n",a);
	strcpy(a,b);
	printf("%s\n",a);
	return 0;
}